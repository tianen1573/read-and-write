//#define _CRT_SECURE_NO_WARNINGS 1
//
//
////#include<iostream>
////
////#include"re.h"
////
////int main()
////{
////
////	func();
////
////	return 0;
////}
//
//// write your code here cpp
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//class _Test
//{
//public:
//    /*_Test()
//    {
//        cout << "AA" << endl;
//
//    }*/
//    _Test()
//    {
//        cout << "AA" << endl;
//    }
//    //_Test(_Test&) = delete;
//    ~_Test()
//    {
//        cout << "~~~~" << endl;
//    }
//};
//
//_Test Ab()
//{
//    cout << "FUNC" << endl;
//    return _Test();
//}
//
//int main()
//{
//    //int n = 0;
//    //while (cin >> n)
//    //{
//    //    getchar();
//    //    string ans;
//    //    while (n--)
//    //    {
//    //        string str;
//    //        getline(cin, str);
//    //        if (str.find(' ') != string::npos ||
//    //            str.find(',') != string::npos)
//    //            ans += "\"" + str + "\", ";
//    //        else
//    //            ans += str + ", ";
//    //    }
//
//    //    ans[ans.size() - 2] = '\0';
//    //    //ans.resize(ans.size() - 2);
//    //    cout << ans << endl;
//    //}
//    
//    _Test Ab();//��������
//   // _Test B;
//    cout << "�ָ�" << endl;
//    //_Test ();
//
//    return 0;
//
//}

//#pragma warning(disable:4996)
//#include <WinSock2.h>
//#include <iostream>
//#include <string>
//
//using namespace std;
//#pragma comment(lib,"ws2_32.lib") //�̶��÷�
//
//uint16_t serverport = 8080;
//std::string serverip = "123.249.100.5";
//
//int main()
//{
//	// windows ���е�
//	WSADATA WSAData;
//	WORD sockVersion = MAKEWORD(2, 2);
//	if (WSAStartup(sockVersion, &WSAData) != 0)
//		return 0;
//
//	SOCKET clientSocket = socket(AF_INET, SOCK_DGRAM, 0);
//	if (INVALID_SOCKET == clientSocket)
//	{
//		cout << "socket error!";
//		return 0;
//	}
//
//	sockaddr_in dstAddr;
//	dstAddr.sin_family = AF_INET;
//	dstAddr.sin_port = htons(serverport);
//	dstAddr.sin_addr.S_un.S_addr = inet_addr(serverip.c_str());
//
//	char buffer[1024];
//
//	while (true)
//	{
//		std::string message;
//		std::cout << "������# ";
//		std::getline(std::cin, message);
//		sendto(clientSocket, message.c_str(), (int)message.size(), 0, (sockaddr*)&dstAddr, sizeof(dstAddr));
//
//		struct sockaddr_in temp;
//		int len = sizeof(temp);
//		int s = recvfrom(clientSocket, buffer, sizeof buffer, 0, (sockaddr*)&temp, &len);
//		if (s > 0)
//		{
//			buffer[s] = '\0';
//			std::cout << "server echo# " << buffer << std::endl;
//		}
//	}
//
//	// windows ����
//	closesocket(clientSocket);
//	WSACleanup();
//
//	return 0;
//}

#include<iostream>

using namespace std;

//extern int i = 10;
//
// 
//class test
//{
//public:
//	void aaa() const
//	{
//		 typeid(this);
//	}
//
//private:
//	int _A;
//};
//
//
//int main()
//{
//	/*static int d = 10;
//	
//	void* ptr = malloc(10);
//
//	sizeof(ptr);*/
//	
//}

//// 1.�������������н���ǣ� A�����뱨�� B�����б��� C����������
//class A
//{
//public:
//    void Print()
//    {
//        cout << "Print()" << endl;//�ն�����Է��ʳ�Ա����
//    }
//private:
//    int _a;
//};
//int main()
//{
//    A* p = nullptr;
//    p->Print();
//    return 0;
//}
// 1.�������������н���ǣ� A�����뱨�� B�����б��� C����������
class A
{
public:
    void PrintA()
    {
        cout << _a << endl;//�ն����޳�Ա����
    }
private:
    int _a;
};
int main()
{
    A* p = new A();
    new(p)A;
    new(p)A;
    new(p)A;

    p->PrintA();
    return 0;
}