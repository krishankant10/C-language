#include <iostream.h>
#include <conio.h>
#include <string.h>
class student
{
	public:
	int rno,h,e,p,c,m;
	char *n;
	void getdata(int rn,char *name)
	{
		rno=rn;
		strcpy(n,name);
	}
	void getmark(int hi,int en,int ph,int ch,int me)
	{
		h=hi;
		e=en;
		p=ph;
		c=ch;
		m=me;
	}
};
class marks :public student
{
	public:
		int total;
		float per;
		char *grade;
	int gettotal()
	{
		total=h+e+p+c+m;
		return total;
	}
	float getper()
	{
		per=gettotal()/500.0*100.0;
		return per;
	}
	char *getgrade()
	{
		if(getper()>=80)
			strcpy(grade,"A");
		else
		if(getper()>=60)
			strcpy(grade,"B");
		else
		if(getper()>=40)
			strcpy(grade,"C");
		else
			strcpy(grade,"Fail");
	return grade;
	}

	int getroll()
	{
		return rno;
	}
	char *getname()
	{
		return n;
	}
};
void main()
{
	marks s[5];
	clrscr();
	int rno,i,h,e,p,c,m;
	char n[100];
	for(i=1;i<4;i++)
	{
	clrscr();
	cout<<"enter ["<<i<<"]student details:\n\n\n";
	cout<<"Enter Roll no.:";
	cin>>rno;
	cout<<"Enter Student Name:";
	cin>>n;
	cout<<"Enter Obtain Marks in Hindi:";
	cin>>h;
	cout<<"Enter Obtain Marks in English:";
	cin>>e;
	cout<<"Enter Obtain Marks in Physics:";
	cin>>p;
	cout<<"Enter Obtain Marks in Chemistry:";
	cin>>c;
	cout<<"Enter Obtain Marks in Maths:";
	cin>>m;
	s[i].getdata(rno,n);
	s[i].getmark(h,e,p,c,m);
	clrscr();
	}

	for(i=1;i<4;i++)
	{
	clrscr();
	cout<<"The ["<<i<<"] student result is :\n\n";
	cout<<"\n\n\nRoll No is i:"<<s[i].getroll();
	cout<<"\nName is :"<<s[i].getname();
	cout<<"\n\n\nTotal is :"<<s[i].gettotal();
	cout<<"\npersentage is:"<<s[i].getper();
	cout<<"\nGrade  is :"<<s[i].getgrade();
	getch();
	}
	getch();
}











