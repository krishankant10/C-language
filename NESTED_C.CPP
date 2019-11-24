#include <iostream.h>
#include <conio.h>
class student
{
	private:
		int roll_no;
		char name[25];
		char branch[15];
		int marks;
	public:
	class date
	{
		int day;
		int month;
		int year;
	public:
		date()
		{}
		read();
	}bhirthday;
	student()
	{
		cout<<"i am in the student class constructor";
	}
	~student()
	{
		cout<<"i am in the student class destructor";
	}
	read()
	{
		cin>>day;
	}

};
void main()
{
	clrscr();
	student s;

	cout<<"Enter roll no.";
	s.read();

	getch();
}