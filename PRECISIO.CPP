#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	float pi=22.0/7.0;
	int i;
	cout<<"Value of pi :\n\n";
	for(i=1;i<20;i++)
	{
		cout.width(21);
		cout.precision(i);
		cout<<pi<<"\n";
	}
getch();
}
