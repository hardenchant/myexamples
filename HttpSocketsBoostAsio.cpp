#include <boost\asio.hpp>
#include <iostream>
#include <sstream>
#include <string>
#include "message.pb.h"
#include "resp_message.pb.h"

namespace ba = boost::asio;
using namespace std;

int main()
{
	ba::io_service is;

	ba::ip::tcp::resolver res(is);
	ba::ip::tcp::resolver::query q("asr.yandex.net", "80");	
	auto iter = res.resolve(q);
	ba::ip::tcp::endpoint ep(*iter);
	ba::basic_stream_socket<ba::ip::tcp> s(is);
	s.connect(ep);

	std::string str;	//http ������ �� ����� ���������
	str = "GET /asr_partial HTTP/1.1\r\nUser-Agent: KeepAliveClient\r\nHost: asr.yandex.net:80\r\nUpgrade: dictation\r\n\r\n";
	
	ba::write(s, ba::buffer(str.data(), str.length()));	//����������

	ba::streambuf strb;
	ba::read_until(s, strb, "\r\n\r\n");	//��������� �����

	istream istr(&strb);

	str.clear();
	while (istr) {			//������� �����, ����� �� �� ��������� 101 Switch Protocols
	getline(istr, str);
	cout << str << endl; //server protocol is changed
	}

	//������ ���������
	//----------------------------------------------------------------------
	ConnectionRequest cr;
	cr.default_instance();
	
	cr.set_speechkitversion("");
	cr.set_servicename("asr_dictation");
	cr.set_uuid("01ae13cb7d496daa1e644628b58fb536");
	cr.set_apikey("2afd54fe-46b0-4a8c-bc51-3225594f96a2");
	cr.set_applicationname("MyRecognizer2k16");
	cr.set_device("Windows 10 PC");
	cr.set_coords("0,0");
	cr.set_lang("ru-RU");
	cr.set_topic("queries");
	cr.set_format("audio/x-pcm;bit=16;rate=16000");
	//----------------------------------------------------------------------
	auto serStruct = cr.SerializeAsString(); //serialize to str


	char hexLength[30];
	itoa(serStruct.size(), hexLength, 16);
	string stringHexLength(hexLength);

	cout << serStruct.size() << "  =>  " << stringHexLength << endl; //������� ��� ���������� � hex
	//�� ������ ��������� 174 = AE

	ba::write(s, ba::buffer(stringHexLength.data(), stringHexLength.length())); //����� ������ � �����
	ba::write(s, ba::buffer("\r\n", 4));	//����������� ������������������
	ba::write(s, ba::buffer(serStruct.data(), serStruct.size())); //serialized data


	boost::system::error_code err;

	auto t = ba::read_until(s, strb, "\r\n", err);		//!!!����� �������� ������ ������ ������
	cout << "Errors: " << err << endl;	//������� ��� �� ������
	cout << "bytes: " << t << endl;	//������� ������� ����������

	string response;
	istr >> response;
	cout << response << endl; //�����, ������ ������ ��� �������� hex(length(responseMessage))
	

	/*while (!err) {		//���� ����� �����������, 
		auto t = ba::read_until(s, strb, "\r\n", err);
		cout << "bytes: " << t << endl;
	}*/

	s.close();
    return 0;
}

