#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	char *desig[5]={"CEO","Manager","Reception","Cleark","Peon"};
	int salary[5]={10200,5200,2900,850,750};
	cout<<"Salary Structure based on Designation"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout.width(15);
	cout<<"Designation";
	cout<<"    ";
	cout.width(15);
	cout<<"Salary(in Rs.)"<<endl;
	cout<<"-------------------------------------"<<endl;
	for(int i=0;i<5;i++)
	{
		cout.fill('.');
		cout.width(15);
		cout<<desig[i];
		cout<<"    ";
		cout.fill('*');
		cout.width(15);
		cout<<salary[i]<<endl;
	}
	cout<<"--------------------------------------"<<endl;
	getch();
}


