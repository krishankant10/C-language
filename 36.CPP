//Q36. using of hierarchical inheritense find sqr and qube
#include <iostream.h>
#include <conio.h>
class number
{
   public:
	int num;
	void setnum(int n)
	{
		num=n;
	}
};
class sqr:public numberw   //publicaly access number
{
     public:
	int getsqr()
	{
		return num*num;
	}
};
class cube:public number   //publicaly access number
{
     public:
	int getcube()
	{
		return num*num*num;
	}
};
void main()
{
	clrscr();
	cout<<"Enter any no.:";
	int n;
	cin>>n;
	sqr s;
	cube c;
	s.setnum(n);
	c.setnum(n);
	cout<<"\nSqr of "<<n<<" Is:"<<s.getsqr();
	cout<<"\nCube of "<<n<<" Is:"<<c.getcube();
	getch();
}
