1. Solution: The error, try block has no catch handlers occurs. This is because, the try block should always contain a corresponding catch block.

The correct program is:

#include <iostream.h>

class Person
{
	int age;
public:
	Person()
	{
	}
	
	Person(int i):age(i)
	{
	}

	void getOccupation()
	{
		try
		{
			switch(age)
			{
			case 10:
				throw ("Child");
			case 20:
				throw "Student";
				break;
			case 30:
				throw "Employee";
				break;
			}
		}
		catch(char* n)
		{
			cout << n << " ";
		}
	}
	void operator ++()
	{
		age+=10;
	}
};
void main()
{
	Person objPerson(10);
	objPerson.getOccupation();
	++objPerson;
	objPerson.getOccupation();
	++objPerson;
	objPerson.getOccupation();
}

