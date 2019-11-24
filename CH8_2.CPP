2. Solution: The error, B is inaccessible because also in E, occurs.
This is because, the first constructor to be invoked is, virtual base class E. The class E inherits the classes, C and D and the class C inherits B. Also, the class F inherits the classes, C,B, D, and E. Therefore, when the class F once again inherit theclass B, the specified error occurs.

The correct program is:

#include <iostream.h>
class A
{
public:
	A()
	{
		cout << "A";
	}
};
class B: public A
{
public:
	B()
	{
		cout << "B";
	}
};

class C
{
public:
	C()
	{
		cout << "C";
	}
};

class D
{
public:
	D()
	{
		cout << "D";
	}
};
class E: public C, public D
{
public:
	E()
	{
		cout << "D";
	}
};
class F: B, virtual E
{
public:
	F()
	{
		cout << "F";
	}
};

void main()
{
	F f;
}

