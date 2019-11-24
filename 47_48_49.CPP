//Q47,Q48,Q49  using of setw,setfill,setprecision
#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
void main()
{
		clrscr();
		cout<<setfill('<');
		cout<<setprecision(3);             //set  xx.xxx
		for(int n=1;n<=6;n++)
		{
			cout<<setw(5);
			cout<<n;
			cout<<setw(10);
			cout<<1.0/float(n)<<"\n";
			if(n==3)
				setfill('>');
		}
		cout<<"\nPadding Changed\n\n";
		cout<<setfill('#');
		cout<<setw(15);
		cout<<12.345678923<<"\n";
	getch();
}