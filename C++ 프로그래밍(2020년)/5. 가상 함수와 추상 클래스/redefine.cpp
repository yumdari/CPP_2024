#include <iostream>
using namespace std;

class Base {
public:
	void f()
	{
		cout << "Base::f() called" << endl;
	}
};		

class Derived : public Base
{
public:
	void f() // 함수 재정의
	{
		cout << "Derived::f() called" << endl;
	}
};

int main()
{
	Derived d, *pDer;
	pDer = &d;
	pDer->f(); // Derived::f() 호출
	
	Base* pBase;
	pBase = pDer; // Up Casting
	pBase->f(); // Base::f() 호출
}