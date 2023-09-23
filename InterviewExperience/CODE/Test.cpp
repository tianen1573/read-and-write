#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include <vector>

using namespace std;

//class A
//{
//public:
//	A()
//	{
//		cout << "I am A" << endl;
//		func2(); // 此时B类对象还未初始化vtable, vptr指向的是A类的vtable，里面全是A的成员函数
//	}
//	void func()
//	{
//		cout << "I am A::func" << endl;
//		func2();
//	}
//	virtual void func1()
//	{
//		cout << "I am A::func1" << endl;
//		func2();
//	}
//private:
//	virtual void func2()
//	{
//		cout << "I am A::func2" << endl;
//	}
//};
//class B : public A
//{
//public:
//	B()
//	{
//		cout << "I am B" << endl;
//		func2();
//	}
//	void func() // 隐藏
//	{
//		cout << "I am B::func" << endl;
//		func2();
//	}
//	virtual void func1() //重写
//	{
//		cout << "I am B::func1" << endl;
//		func2();
//	}
//public:
//	virtual void func2() // 重写
//	{
//		cout << "I am B::func2" << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	A *a = new B();
//
//	b.func();
//	b.func1();
//	a->func();
//	a->func1();
//
//	return 0;
//}

//#include <vector>
//
//int main()
//{
//	vector<int> arr = { 1,2,3,4,5,6};
//	auto it = find(arr.begin(), arr.end(), 2);
//
//	cout << it._Ptr << endl;
//	cout << *it << endl;
//	arr.erase(it);
//	cout << *it << endl;
//	cout << it._Ptr << endl;
//
//	return 0;
//}

//class A
//{
//public:
//	A()
//	{
//		cout << "I am A" << endl;
//	}
//	A(const A& a)
//	{
//		cout << "I am A : a" << endl;
//	}
//	~A()
//	{
//		cout << "I am ~A" << endl;
//	}
//	void func1()
//	{
//		A::st;
//	}
//	static void func2()
//	{
//		st;
//	}
//	int val = 10;
//	const static int st = 10;
//};
//class B
//{
//public:
//	B()
//	{
//		cout << "I am B" << endl;
//	}
//	~B()
//	{
//		cout << "I am ~B" << endl;
//	}
//	static A a;
//};
//A B::a; // 1
//
//int func()
//{
//	static B b; // 3
//	return 1;
//}
//int aaaa = func(); // 4
//B bb; // 2
//int main()
//{
//	cout << "main()" << endl;
//
//	A aa;
//	static A aaa = aa; // 5
//	//func();
//
//	cout << "~main()" << endl;
//	return 0;
//}

//int main()
//{
//
//	//vector<const int&> arr1;
//	vector<int*> arr2;
//	vector<int> arr3;
//	int *val;
//	int*& a = val;
//
//	const int& * const  b;
//
//	return 0;
//}

//class A
//{
//public:
//	A(): a(10)
//	{
//	}
//	A(const A* ptr)
//	{
//		a = ptr->a;
//	}
//
//	inline virtual void func()
//	{
//
//	}
//
//	int a;
//};
//
//int main()
//{
//	A a1;
//
//	A a2(&a1);
//
//	cout << a1.a << ' ' << a2.a;
//
//	return 0;
//}

//class A
//{
//public:
//	A()
//		:ptr(new int(10))
//	{
//		cout << "I am A()" << endl;
//		Print();
//	}
//	virtual ~A()
//	{
//		cout << "I am ~A()" << endl;
//	}
//
//	virtual void Print()
//	{
//		cout << "A: " << * ptr << endl;
//	}
//
//	int* ptr;
//};
//class B : public A
//{
//public:
//	B()
//		:pptr(new int(20))
//	{
//		cout << "I am B()" << endl;
//		Print();
//	}
//	virtual ~B()
//	{
//		cout << "I am ~B()" << endl;
//	}
//
//	virtual void Print()
//	{
//		cout << "B: " << *pptr << endl;
//	}
//
//	int* pptr;
//};
//
//int main()
//{
//	B b;
//
//	return 0;
//}


////#include "a.h"
//#include "b.h"
//
//bool func(int x = 1, int y = 1)
//{
//	cout << "func: " << x + y << endl;
//	return x + y;
//}
////void func(){}
//void func(int x = 1)
//{
//
//}
//
//int main()
//{
//
//	//val = 10;
//	//cout << val;
//
//	//func();
//	// 函数定义的函数头， 必须和对应的函数声明的函数头相同，否则就是函数重载
//
//	return 0;
//}


//string tmp;
//string GetIntArryString(vector<int>& Data)
//{
//	string strRet = "";
//	const char* szIndex = "0123456789ABCDEF";
//	int nZeroCount = 0;
//	int nMask = 0xF;
//	for (int i = 0; i < Data.size() * 8; ++i)
//	{
//		int nPos = (7 - i % 8) * 4;
//		uint8_t uValue = (Data[i / 8] & (nMask << nPos)) >> nPos;
//		tmp.push_back(uValue + '0');
//		if ((uValue && nZeroCount) || (nZeroCount == ('z' - 'a' + 2)))
//		{
//			strRet.push_back((nZeroCount > 1 ? ('a' + nZeroCount - 2) : '0'));
//			nZeroCount = 0;
//		}
//		if (!uValue)
//		{
//			nZeroCount++;
//		}
//		else
//		{
//			strRet.push_back(szIndex[uValue]);
//		}
//	}
//	if (nZeroCount > 0)
//	{
//		strRet.push_back((nZeroCount > 1 ? ('a' + nZeroCount - 2) : '0'));
//
//	}
//	return strRet;
//}
//
//int main()
//{
//	vector<int> arr = { 16, 17};
//	GetIntArryString(arr);
//
//	return 0;
//}

//int main()
//{
//
//	double d1 = -0;
//	double d2 = +0;
//
//	int* p = (int*)&d1;
//
//	cout << *(p) << ' ' << *(p + 1) << endl; // 取出两个字节
//	cout << (int&)d1 << endl; // 一个
//	cout << *(int*)&d1 << endl; // 一个
//	if ((int&)d1 == (int&)d2)
//		cout << "d1 == d2" << endl;
//
//	return 0;
//}


///*统计一个文件里各个字符出现的次数,这里只统计了26个字母,如果还有更多的字符的话,将数组再扩大就行了*/
//#include<stdio.h>
//#include<math.h>
//void stat(char* file, int* statistic, int n)
//{
//	int i = 0;
//	while (i++ < n)
//		statistic[file[i - 1] - 97]++;
//}
//int main()
//{
//	char file[100] = { 0 };
//	int statistic[26] = { 0 };
//	int j = 0;
//	FILE* fp;
//	if ((fp = fopen("1.txt", "r")) == NULL)
//	{
//		printf("can't open 1.txt");
//		return 1;
//	}
//	while (!feof(fp))
//	{
//		int i = fread(file, 1, 100, fp);
//		j += i;
//		stat(file, statistic, i);
//	}
//	fclose(fp);
//	
//	for (int i = 0; i < 26; i++)
//		printf("%c:%d\n", 97 + i, statistic[i]);
//	cout << "charCnt: " << j;
//	return 0;
//}


//typedef struct VAL
//{
//	int a;
//	char b;
//private:
//	int c;
//public:
//	VAL()
//	{
//		a = b = c = 0;
//	}
//	bool operator==(const VAL& v)
//	{
//		if (a != v.a) return false;
//		if (b != v.b) return false;
//		if (c != v.c) return false;
//
//		return true;
//	}
//	friend bool isEqual(const VAL& v1, const VAL& v2);
//} VAl;
//
//bool isEqual(const VAL& v1, const VAL& v2)
//{
//	if (v1.a != v2.a) return false;
//	if (v1.b != v2.b) return false;
//	if (v1.c != v2.c) return false;
//
//	return true;
//}
//
//int main()
//{
//	VAL v1, v2;
//
//	if (v1 == v2)
//		cout << "v1 == v2" << endl;
//	
//	if (isEqual(v1, v2))
//		cout << "V1 == V2";
//
//	return 0;
//}

class Singleton
{
public:
    static Singleton* GetInstance()
    {
        return m_instance;
    }
    // 构造函数私有
    Singleton() {};
private:
    

    // C++98 防拷贝
    Singleton(Singleton const&);
    Singleton& operator=(Singleton const&);
    // or
    // C++11
    //Singleton(Singleton const&) = delete;
    //Singleton& operator=(Singleton const&) = delete;

    static Singleton* m_instance;
};

Singleton* Singleton::m_instance = new Singleton();

int main()
{
    return 0;
}