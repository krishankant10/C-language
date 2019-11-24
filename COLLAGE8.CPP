#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		A(int p,int q)
		{
			a=p;
			b=q;
		}
		int getsum()
		{
			return a+b;
		}
};
void main()
{
	clrscr();
	int a,b;
	cout<<"\nEnter two no.";
	cin>>a>>b;
	A p(a,b);
	cout<<"\nSum is : "<<p.getsum();
	getch();
}