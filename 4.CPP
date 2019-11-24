//	Q4. Display various type or airthmatic operation using mixed data type
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();     //for clear screen
	int i1=10,i2=15;
	float f1=10.50,f2=15.23;
	cout<<"All Airthmetic operation is\n\n";
	cout<<"Sum is \n";
	cout<<i1<<"+"<<i2<<"="<<i1+i2<<endl;
	cout<<f1<<"+"<<f2<<"="<<f1+f2<<endl;
	cout<<i1<<"+"<<f2<<"="<<i1+f2<<endl;
	cout<<f1<<"+"<<i2<<"="<<f1+i2<<endl<<endl;

	cout<<"Subtraction is \n";
	cout<<i1<<"-"<<i2<<"="<<i1-i2<<endl;
	cout<<f1<<"-"<<f2<<"="<<f1-f2<<endl;
	cout<<i1<<"-"<<f2<<"="<<i1-f2<<endl;
	cout<<f1<<"-"<<i2<<"="<<f1-i2<<endl<<endl;

	cout<<"Multiple is \n";
	cout<<i1<<"*"<<i2<<"="<<i1*i2<<endl;
	cout<<f1<<"*"<<f2<<"="<<f1*f2<<endl;
	cout<<i1<<"*"<<f2<<"="<<i1*f2<<endl;
	cout<<f1<<"*"<<i2<<"="<<f1*i2<<endl<<endl;

	cout<<"Devide is \n";
	cout<<i1<<"/"<<i2<<"="<<i1/i2<<endl;
	cout<<f1<<"/"<<f2<<"="<<f1/f2<<endl;
	cout<<i1<<"/"<<f2<<"="<<i1/f2<<endl;
	cout<<f1<<"/"<<i2<<"="<<f1/i2<<endl<<endl;
	getch();
}
