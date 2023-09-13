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


//#include "a.h"
#include "b.h"

bool func(int x = 1, int y = 1)
{
	cout << "func: " << x + y << endl;
	return x + y;
}
//void func(){}
void func(int x = 1)
{

}

int main()
{

	//val = 10;
	//cout << val;

	//func();
	// 函数定义的函数头， 必须和对应的函数声明的函数头相同，否则就是函数重载

	return 0;
}

