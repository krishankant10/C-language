//Q.37.read and write employee data With department name or no. using hierarchical inheretence
#include <iostream.h>
#include <string.h>
#include <conio.h>
class employee
{
    public:
	int empno,deptno;
	char empname[30],deptname[20];
	void setdata(char *nn,int no)
	{
		empno=no;
		strcpy(empname,nn);
	}
	void getdept()
	{
		cout<<"Department No. is : "<<deptname<<endl;
		cout<<"Department no is :"<<deptno;
	}
};
class emp: public employee
{
   public:
	void getemp()
	{
		cout<<"Employee Name is : "<<empname<<endl;
		cout<<"Employee No. : "<<empno<<endl;
	}
};
class dept: public employee
{
    public:
	void setdept(char *name,int no)
	{
		strcpy(deptname,name);
		deptno=no;
	}
};
void main()
{
	clrscr();
	int empno,deptno;
	char deptname[30];
	emp e;
	dept d;
	cout<<"Enter Employee name:";
	char name[30];
	cin>>name;
	cout<<"Enter Employee No.:";
	cin>>empno;
	cout<<"Enter Department Name:";
	cin>>deptname;
	cout<<"Enter Department No.:";
	cin>>deptno;
	e.setdata(name,empno);
	d.setdept(deptname,deptno);
	cout<<"\n\n";
	e.getemp();
	d.getdept();
	getch();
}