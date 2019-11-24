#include <iostream.h>
#include <conio.h>
#include <string.h>
struct date
{
	int day,month,year;
	void show()
	{
		cout<<day<<"-"<<month<<"-"<<year<<endl;
	}
};
void read(date *dp)
{
	cout<<"Enter day:";
	cin>>dp->day;
	cout<<"Enter Month:";
	cin>>dp->month;
	cout<<"Enter Year :";
	cin>>dp->year;
}
void main()
{
	clrscr();
	date d1,*dp1,*dp2;
	cout<<"Enter Your Birth Date...."<<endl;
	read(&d1);
	dp2=new date;
	cout<<"Enter date of Birth Your Sister...."<<endl;
	read(dp2);
	cout<<"Your Date of birh is :";
	dp1=&d1;
	dp1->show();
	cout<<"\n\nYour Sister Date of birth is :";
	dp2->show();
	delete dp2;
	getch();
}