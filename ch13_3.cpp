3. solution: The error, syntax error : '.', occurs. This is because, to catch all the errors, we need to specify three dots. But, only two are specified.

The correct program is:

#include <iostream.h>

class Mammal
{
public:
	Mammal()
	{
	}

	class Human
	{
	};

	class Student  : virtual public Human
	{
	};

	class Employee : virtual public Human
	{
	};

	void getObject()
	{
		throw Employee();
	}
};
void main()
{
	Mammal m;
	try
	{
		m.getObject();
	}
	catch(Mammal::Human&)
	{
		cout << "Human ";
	}
	catch(Mammal::Student&)
	{
		cout << "Student ";
	}
	catch(Mammal::Employee&)
	{
		cout << "Employee ";
	}
	catch(...)
	{
		cout << "All";
	}
}

