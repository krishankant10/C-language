#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
	clrscr();
	cout<<"Precision set to 3 digit\n\n";
	cout.precision(3);
	cout.width(10);
	cout<<"VALUE";
	cout<<"SQRT_OF_VALUE\n";
	for(int n=1;n<=5;n++)
	{
		cout.width(8);
		cout<<n;
		cout.width(13);
		cout<<sqrt(n)<<"\n";
	}
	cout<<"\n Precision set to 5 Didit\n\n";
	cout.precision(5);
	cout<<"Sqrt(10)="<<sqrt(10)<<"\n\n";
	cout.precision(0);
	cout<<"Sqrt(10)="<<sqrt(10)<<"\n\n";
	getch();
}

