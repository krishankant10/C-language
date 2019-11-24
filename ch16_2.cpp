2. Solution: The error, syntax error missing '(' before identifier 'a', occurs. The static_cast operator should be specified using the syntax: static_cast<type>(object). Therefore, we need to specify the object within brackets.

The correct program is:

#include <iostream.h>

class A
{
protected:
	int i;
public:
	A()
	{
		i = 10;
	}

	int getI()
	{
		return i;
	}
};

class B: public A
{
public:
	B()
	{
	}

	int getI()
	{
		return i + i;
	}
};

void main()
{
	A *a = new A();
	B *b = static_cast<B*>(a);
	cout << b->getI();
}