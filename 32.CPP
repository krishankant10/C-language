//32. read and write informatin of a student using single level inheritence
#include <iostream.h>
#include <conio.h>
#include <string.h>
class std
{
	public:
	int rno,age;
	char name[30],mob[10];
	void setdata()
	{
		cout<<"Enter name :";
		cin>>name;
		cout<<"Enter Roll no.:";
		cin>>rno;
		cout<<"Enter Age :";
		cin>>age;
		cout<<"Enter Mobile no:";
		cin>>mob;
	}
};
class student :public std
{
	public:
	void getdata()
	{
		cout<<"Name is :"<<name<<endl;
		cout<<"Roll no.:"<<rno<<endl;
		cout<<"Age is :"<<age<<endl;
		cout<<"Mobile no is :"<<mob<<endl;
	}
};
void main()
{
	student s[5];
	clrscr();
	cout<<"How many student want to Hold Details:";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		s[i].setdata();
	for(i=0;i<n;i++)
		s[i].getdata();
	getch();
}
