//	Q15. whether check no. positive negetive or zero
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int num;
	cout<<"Enter a number:";
	cin>>num;
	if(num>0)
		cout<<"No. is positive";
	else
	if(num<0)
		cout<<"No. is Negetive";
	else
		cout<<"No. is Zero";
	getch();
}