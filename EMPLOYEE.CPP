#include<iostream.h>
#include <conio.h>
#include <stdio.h>
#include<string.h>
class employee
{
	public:
	char day[20];
	char name[100],month[10],year[10],date[100];
	double salary;
	void employ(char na[],char dd[],char mm[],char yyyy[],double sal)
	{
		strcpy(name,na);
		strcpy(day,dd);
		strcpy(month,mm);
		strcpy(year,yyyy);
		salary=sal;
	}
	char *getname()
	{
		return name;
	}
	double getsalary()
	{
		return salary;
	}
	char * gethiredate()
	{
		strcpy(date,day);
		strcat(date,"-");
		strcat(date,month);
		strcat(date,"-");
		strcat(date,year);
	}
	void output()
	{
		cout<<"\n\n\n\n Name is :"<<name;
		cout<<"\n Salary is :"<<salary;
		cout<<"\n Date is :"<<gethiredate();
	}
	void raisesalary(double per)
	{
		salary=salary+salary*per/100;
	}
};
class manager: public employee
{
	public:
	void setbonus(double bonus)
	{
		salary=salary+bonus;
	}
};
void main()
{
	clrscr();
	manager emp;
	char name[100],year[4]="\0";
	char day[10];
	char mon[10]="\0";
	double salary;
	cout<<"Enter Employee Name:";
	cin>>name;
	cout<<"Enter Employee salary:";
	cin>>salary;
	cout<<"Enter Employee joining day:";
	cin>>day;
	cout<<"Enter Employee joining month:";
	cin>>mon;
	cout<<"Enter Employee joining year:";
	cin>>year;
	emp.employ(name,day,mon,year,salary);
	emp.output();
	emp.setbonus(5000.0);
	emp.output();
	emp.raisesalary(10.0);
	emp.output();
	getch();
}