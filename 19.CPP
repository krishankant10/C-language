//Q19. calculate simple interest
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	float principle,time,rate,si;
	cout<<"Enter principle amount: ";
	cin>>principle;
	cout<<"Enter time:";
	cin>>time;
	cout<<"Enter rate of interest:";
	cin>>rate;
	si=(principle*time*rate)/100.0;
	cout<<"\n\nSimple interest is :"<<si;
	getch();
}
