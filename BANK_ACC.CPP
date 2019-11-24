#include <math.h>
#include <stdio.h>
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int size=11;
int m=20;
class account
{
	public:
		char name[20],type[20],a[20];
		double bal;
};
class cur :public account
{
	public:
	void getdata(char ty[],char na[],char ac[])
	{
		strcpy(name,na);
		strcpy(type,ty);
		strcpy(a,ac);
	}
	void setbal(double balan)
	{
		bal=balan;
	}
	void output()
	{
		clrscr();
		cout<<"\nCustomer Account No. is :"<<a;
		cout<<"\nCustomer Name is :"<<name;
		cout<<"\nCustomer Account type is :"<<type;
		cout<<"\nTotal balance in account is :"<<bal;
		cout<<"\nCheck Book available";
		getch();
	}

	void result()
	{
	while(1)
	{
		clrscr();
		gotoxy(20,10);
		cout<<"(1) Accept deposite from a customer and update the balance";
		gotoxy(20,12);
		cout<<"(2) Display the Balance";
		gotoxy(20,14);
		cout<<"(3) permite withdrawal and update the balance";
		gotoxy(20,16);
		cout<<"(4) Check for the Minimum balance,impose penalty";
		gotoxy(20,18);
		cout<<",necessary,and update the balance";
		gotoxy(20,20);
		cout<<"(5) Exit";
		gotoxy(20,6);
		cout<<"Choose any option:";
		int m;

		cin>>m;
		if(m==1)
		{
			clrscr();
			cout<<"Enter how many amount want to deposite:" ;
			double l=0;
			cin>>l;
			setbal(bal+l);
			output();
		}
		else
		if(m==2)
		{
			//show balance
			clrscr();
			output();
		}
		else
		if(m==3)
		{
			clrscr();
			cout<<"How many balance was withdrawal:";
			int b;
			cin>>b;
			if(b>bal)
			{
				cout<<"! Sorry Entered amount is grether then total balance:";
				getch();
			}
			else
			{
				setbal(bal-b);
				cout<<"\nBalance Succesfull update";
				cout<<"\n\nPress......";
				getch();
			}
		}
		else
		if(m==4)
		{
			clrscr();
			if(bal<1000)
			{
				setbal(bal-(bal*18.0)/100.0);
				output();
			}
			else
			{
				clrscr();
				cout<<"\n\n!your balance is up to date";
				cout<<"\n\nPress.........";
				getch();
				output();
			}
		}


		else
		if(m==5)
		{
			exit(0);
		}
		else
		{

			clrscr();
			gotoxy(30,14);
			cout<<"! Sorry Try Again";
			getch();
		}
	}

	}

};
class sav :public account
{
	public:
	void getdata(char *ty,char *na,char *ac)
	{
		strcpy(name,na);
		strcpy(type,ty);
		strcpy(a,ac);
	}
	void setbal(double balan)
	{
		bal=balan;
	}
	void output()
	{
		clrscr();
		cout<<"\nCustomer Account No. is :"<<a;
		cout<<"\nCustomer Name is :"<<name;
		cout<<"\nCustomer Account type is :"<<type;
		cout<<"\nTotal balance in account is :"<<bal;
		cout<<"\nCheck Book Facility are Not available";
		getch();
	}
	void result()
	{
	while(1)
	{
		clrscr();
		gotoxy(20,10);
		cout<<"(1) Accept deposite from a customer and update the balance";
		gotoxy(20,12);
		cout<<"(2) Display the Balance";
		gotoxy(20,14);
		cout<<"(3) Compute the Deposite Interest";
		gotoxy(20,16);
		cout<<"(4) permite withdrawal and update the balance";
		gotoxy(20,18);
		cout<<"(5) Check for the Minimum balance,impose penalty";
		gotoxy(20,19);
		cout<<",necessary,and update the balance";
		gotoxy(20,21);
		cout<<"(6) Exit";
		int m;
		int flag=1;
		cin>>m;
		if(m==1)
		{
			clrscr();
			cout<<"Enter how many amount want to deposite:" ;
			double l;
			cin>>l;
			bal=bal+l;
			output();
		}
		else
		if(m==2)
		{
			clrscr();
			output();
		}
		else
		if(m==3)
		{
			clrscr();
			int t,n;
			float r;
			cout<<"How much interest: ";
			cin>>r;
			cout<<"Period in Year :";
			cin>>t;
			cout<<"Enter How many time interest in a year:";
			cin>>n;
			r=r/100.0;
			bal=bal*(pow((1.0+(r/n)),n*t));
			output();
		}
		else
		if(m==4)
		{
			clrscr();
			cout<<"How many balance was withdrawal:";
			int b;
			cin>>b;
			if(b>bal)
			{
				cout<<"! Sorry Entered amount is grether then total balance:";
				getch();
			}
			else
			bal=bal-b;
			output();
		}
		else
		if(m==5)
		{
			if(flag==1)
			{
			clrscr();
			if(bal<1000)
			{
				bal=bal-(bal*5)/100.0;
				output();
			}
			else
			{
				cout<<"!your balance is up to date";
				output();
			}
			}
			else
			{
				clrscr();
				gotoxy(30,12);

				cout<<"!!Your panalty already added" ;
				getch();
			}
		}


		else
		if(m==6)
		{
			exit(0);
		}
		else
		{

			clrscr();
			gotoxy(30,14);
			cout<<"! Sorry Try Again";
			getch();
		}
	}

	}
};
void main()
{
	clrscr();
	int i;
	double bal;
	char name[100],type[100],an[100];
	gotoxy(30,12);
	cout<<"Enter account details:";
	gotoxy(30,16);
	cout<<"Enter account type:";
	cin>>type;
	int j;
	if(strcmp(type,"saving")==0)
	{
		clrscr();
		sav ac;
		cout<<"\nEnter customer name:";
		gets(name);
		cout<<"\nEnter customer Account No. :";
		gets(an);
		cout<<"\nEnter Total amount in account :";
		cin>>bal;
		ac.setbal(bal);
		ac.getdata(type,name,an);
		ac.result();
		exit(0);
	}
	if(strcmp(type,"current")==0)
	{
		clrscr();
		cur ac;
		cout<<"\nEnter customer name:";
		gets(name);
		cout<<"\nEnter customer Account No.";
		gets(an);
		cout<<"\nEnter Total amount in account :";
		cin>>bal;
		ac.setbal(bal);
		ac.getdata(type,name,an);
		ac.result();
	}
	else
	{
		clrscr();
		gotoxy(20,12);
		cout<<"!Sorry this type of account is not exist ";
	}

	getch();
}
