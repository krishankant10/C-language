#include <iostream.h>
#include <conio.h>
const int max_marks=600;
class student
{
	private:
		char name[20];
		int marks;
	public:
		void read();
		void show();
};
void student::read()
{
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter Secured Marks:";
	cin>>marks;
}
void student::show()
{
	cout.width(15);
	cout<<name;
	cout.width(5);
	cout<<marks;
	cout.width(10);
	cout<<int(float(marks)/max_marks*100);
}
void main()
{
	clrscr();
	int i,count;
	student *s;
	cout<<"How many Students";
	cin>>count;
	s=new student[count];
	for(i=0;i<count;i++)
	{
		cout<<"ENter Student ["<<i+1<<"] Details..."<<endl;
		s[i].read();
	}
	clrscr();
	cout<<"student Report ...";
	cout<<"\n";

	cout.width(3);
	cout<<"R#";
	cout.width(15);
	cout<<"Student";
	cout.width(6);
	cout<<"Marks";
	cout.width(15);
	cout<<"Percentage";
	cout<<endl;
	for(i=0;i<count;i++)
	{
		cout.width(3);
		cout<<i+1;
		s[i].show();
		cout<<endl;
	}
	getch();
}