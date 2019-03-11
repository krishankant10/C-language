//Q31.  single inheritence
#include <iostream.h>
#include <conio.h>
#include <string.h>
class emp
{
     public:
	char name[30];
	int empno;
	void setdata(char *n,int emno)
	{
		strcpy(name,n);
		empno=emno;
	}
	void getdata()
	{
		cout<<"Emp no is :"<<empno<<endl;
		cout<<"Emp name is :"<<name;
	}
};
class std:public emp{};  //single inheritence
void main()
{
	std s1;        //variable of std class
	clrscr();
	cout<<"Enter Emp no :";
	int empno;
	cin>>empno;
	char *name;
	cout<<"Enter Name:";
	cin>>name;
	s1.setdata(name,empno);
	s1.getdata();
	getch();
}