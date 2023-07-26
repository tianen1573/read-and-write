#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>

using namespace std;

class A
{
public:
	void func()
	{
		cout << "I am A::func" << endl;
		func2();
	}
	virtual void func1()
	{
		cout << "I am A::func1" << endl;
		func2();
	}
private:
	virtual void func2()
	{
		cout << "I am A::func2" << endl;
	}
};
class B : public A
{
public:
	void func() // Òþ²Ø
	{
		cout << "I am B::func" << endl;
		func2();
	}
private:
	virtual void func1() //ÖØÐ´
	{
		cout << "I am B::func1" << endl;
		func2();
	}
public:
	virtual void func2() // ÖØÐ´
	{
		cout << "I am B::func2" << endl;
	}
};

int main()
{
	B b;
	A *a = &b;

	b.A::func();
	//b.func1();
	a->func();
	a->func1();

	return 0;
}