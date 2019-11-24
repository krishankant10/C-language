#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int size=20;
	char city[20];
	cout<<"Enter City name\n";
	cin>>city;
	cout<<"City Name is :"<<city<<"\n\n";
	cout<<"Enter City Nmae again:";
	cin.getline(city,size);
	cout<<"City Name is :"<<city<<"\n\n";
	cout<<"Enter City Nmae again:";
	cin.getline(city,size);
	cout<<"City Name is :"<<city<<"\n\n";

	cout<<"Enter City Nmae again:";
	cin.getline(city,size);
	cout<<"City Name is :"<<city<<"\n\n";
getch();
}