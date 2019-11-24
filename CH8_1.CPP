1. Solution: The errors, Student::Student() is not accessible in function AnnualTest::AnnualTest(int,int) and Student::getRollNumber() is not accessible in function AnnualTest::getRollNumber(), occur.

This is because the functions declared in the Student class are private, and are not accessible outside the class. To access the functions declared in the Student class, the functins must be declared as public.

The correct program is:

#include <iostream.h>
class Student {
	char* name;
	int rollNumber;
public:
	Student() {
		name = "AlanKay";
		rollNumber = 1025;
	}
	void setNumber(int no) {
		rollNumber = no;
	}
	int getRollNumber() {
		return rollNumber;
	}
};

class AnualTest: Student {
	int mark1, mark2;
public:
	AnualTest(int m1, int m2)
		:mark1(m1), mark2(m2) {
	}
	int getRollNumber() {
		return Student::getRollNumber();
	}
};

void main()
{
	AnualTest test1(92, 85);
	cout << test1.getRollNumber();
}
