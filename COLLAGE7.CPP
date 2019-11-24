#include<iostream.h>
#include<conio.h>
inline int squar(int a)
{
	return a*a;
}
void main()
{
	int a;
	clrscr();
	cout<<"Enter value of a";
	cin>>a;
	cout<<"Suuar is : "<<squar(a);
	getch();
}