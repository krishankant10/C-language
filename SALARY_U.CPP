#include <iostream.h>
#include <conio.h>
#include <string.h>
class employee
{
     public:
	char fname[20],lname[20],*uidai;
	void employ(char fn[],char ln[],char *aa)
	{
		strcpy(fname,fn);
		strcpy(lname,ln);
		strcpy(uidai,aa);
	}
};
class salariedemp : public employee
{
    public:
	double weeksal;
	void weeksalary(double time,double weak)
	{
		weeksal=time*weak;
	}
	void output()
	{
		cout<<"\n\n\nTotal salary is :"<<weeksal;
	}


};
class commissionemp:public employee
{
    public:
	double grosssal,rate,basesal;
	void base(double sal)
	{
		basesal=sal;
	}
	void grosssalary(double r)
	{
		grosssal=basesal+(basesal*r/100.0);
	}
	void output()
	{
		cout<<"\n\nName of Employee is :"<<fname<<" "<<lname;
		cout<<"\nEmployee aadhar no.is :"<<uidai;
		cout<<"\nEmployee Base salary is :"<<basesal;
		cout<<"\nEmployee gross Salary:"<<grosssal;
	}
};
class hourlyemp:public employee
{
   public:
	double wage,hrs,salary;
	void wages(double wa,double hr)
	{
		salary=wa*hr;
	}
	void output()
	{
		cout<<"\n\n\nTotal salary is :"<<salary;
	}
};
/*class basepluscommissionemp :public commissionemp
{
   public:
	double basesal;
	void

};*/
void main()
{
	clrscr();
	commissionemp emp;
	char fname[20],lname[20],uidai[15];
	double basesal,rate;
	cout<<"Enter the Employee First Name:";
	cin>>fname;
	cout<<"Enter The Employee Last Name :";
	cin>>lname;
	cout<<"Enter the Employee aadhar no.:";
	for(int i=0;i<12;i++)
	{
		uidai[i]=getche();
		if(i==3||i==7)
		{
			cout<<"-";
		}
	}
	emp.employ(fname,lname,uidai);
	cout<<"\nEnter the Base Salary of Employee:";
	cin>>basesal;
	emp.base(basesal);
	cout<<"Enter rate of Commission :";
	cin>>rate;
	emp.grosssalary(rate);
	emp.output();
	hourlyemp kk;
	cout<<"\n\n\nHowmuch Hr. employee works:";
	double wage,hrs;
	cin>>hrs;
	cout<<"Enter per hour Salary:";
	cin>>wage;
	kk.wages(wage,hrs);
	kk.output();
	double weak,time;
	cout<<"\n\n\nHowmuch Week employee works:";
	cin>>time;
	cout<<"Enter per Week Salary:";
	cin>>weak;
	salariedemp k;
	k.weeksalary(time,weak);
	k.output();
	getch();
}
