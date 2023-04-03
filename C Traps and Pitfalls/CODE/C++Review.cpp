#define _CRT_SECURE_NO_WARNINGS 1


//#include<iostream>
//
//#include"re.h"
//
//int main()
//{
//
//	func();
//
//	return 0;
//}

// write your code here cpp

#include<iostream>
#include<string>

using namespace std;


class _Test
{
public:
    /*_Test()
    {
        cout << "AA" << endl;

    }*/
    _Test()
    {
        cout << "AA" << endl;
    }
    //_Test(_Test&) = delete;
    ~_Test()
    {
        cout << "~~~~" << endl;
    }
};

_Test Ab()
{
    cout << "FUNC" << endl;
    return _Test();
}

int main()
{
    //int n = 0;
    //while (cin >> n)
    //{
    //    getchar();
    //    string ans;
    //    while (n--)
    //    {
    //        string str;
    //        getline(cin, str);
    //        if (str.find(' ') != string::npos ||
    //            str.find(',') != string::npos)
    //            ans += "\"" + str + "\", ";
    //        else
    //            ans += str + ", ";
    //    }

    //    ans[ans.size() - 2] = '\0';
    //    //ans.resize(ans.size() - 2);
    //    cout << ans << endl;
    //}
    
    _Test Ab();//º¯ÊýÉùÃ÷
   // _Test B;
    cout << "·Ö¸î" << endl;
    //_Test ();

    return 0;

}