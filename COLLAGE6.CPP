#include<iostream.h>
#include<conio.h>
class emp
{
	int x,y,z;
	public:
		void setdata(int a,int b)
		{
			x=a;
			y=b;
		}
		void cal()
		{
			z=x+y;
		}
		void show()
		{
			cout<<"\nSum of two no. is : "<<z;
		}
};
void main()
{
emp e;
clrscr();
int a,b;
cout<<"Enter two number : ";
cin>>a>>b;
e.setdata(a,b);
e.cal();
e.show();
getch();
}