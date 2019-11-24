#include <iostream.h>
#include <conio.h>
ostream & rupee(ostream& os)
{
	os<<"Rs."<<flush;
	return os;
}
ostream & dollar(ostream & os)
{
	cout<<"US$ "<<flush;
	return os;
}
void main()
{
	clrscr();
	char item1[25],item2[25];
	unsigned int cost1,cost2;
	cout<<"Item Sale in India.....\n";
	cout<<"Enter Item Name:";
	cin.getline(item1,25);
	cout<<"Cost of Item :";
	cin>>cost1;
	cout<<"Enter sale in Us .......\n";
	cout<<"Enter Item Name:";
	cin.ignore();
	cin.getline(item2,25);
	cout<<"Cost of Item is :";
	cin>>cost2;
	cout<<"Item Cost Statistics.....\n";
	cout<<"Item Name :"<<item1<<endl;
	cout<<"Cost is :"<<rupee<<cost1<<endl;
	cout<<"Item Name :"<<item2<<endl;
	cout<<"Cost is :"<<dollar<<cost2<<endl;
	getch();
}



