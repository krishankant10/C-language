//Q35. example of multiple inheritence
#include <iostream.h>
#include <conio.h>
class number           //first class
{
   public:
	int num;
	void setnum(int n)
	{
		num=n;
	}
};
class sqr   //2nd class
{
     public:
	int getsqr(int num)
	{
		return num*num;
	}
};
class cube:public number ,public sqr   //publicaly access both class
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
	cube c;
	c.setnum(n);
	cout<<"\nSqr of "<<n<<" Is:"<<c.getsqr(n);
	cout<<"\nCube of "<<n<<" Is:"<<c.getcube();
	getch();
}
