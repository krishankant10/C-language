3. Soution: The error, storage class virtual is not allowed here, occurs. This is because, C++ does not allow the use of virtual constructors.

The correct program is:

#include "iostream.h"

class Human
{
public:
	Human()
	{
	}

	virtual ~Human()
	{
		cout << "Human::~Human";
	}
};

class Student: public Human
{
public:
	Student()
	{
	}
	~Student()
	{
		cout << "Student::~Student()";
	}

};

void main()
{
	Human *H = new Student();
	delete H;
}