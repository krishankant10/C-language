2. Solution:	The error occurs in the statement this.age=age. This is because, this pointer should be used with the arrow (->) operator.

The correct program is:

#include <iostream.h>

class Person
{
	int age;
public:
	Person()
	{
	}
	Person(int age)
	{
		this->age = age;
	}

	Person& operator < (Person &p)
	{
		return age < p.age ? p: *this;
	}

	int getAge()
	{
		return age;
	}
};

void main()
{
	Person p1(15);
	Person p2(11);
	Person p3;
	//if p1 is less than p2 
	p3 = p1 < p2;  p1.lessthan(p2)

	cout << p3.getAge();
}