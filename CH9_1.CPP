1. Solution: The error, Cannot convert 'Name' to 'Info *',  occurs. This is because, we have to assign the address of n to the pointer variable p in the main() function.

The correct program is:

#include <iostream.h>

class Info
{
	char *name;
	int number;
public:
	void getInfo()
	{
		cout << "Info::getInfo ";
		getName();
	}

	void getName()
	{
		cout << "Info::getName ";
	}
};

class Name: public Info
{
	char *name;
public:
	void getName()
	{
		cout << "Name::getName ";
	}
};

void main()
{
	Info *p;
	Name n;
	p = &n;
	p->getInfo();
}
