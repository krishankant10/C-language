//Q8. find the volume of a sphere
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int radius;
	float volume;
	cout<<"Enter Radius of A sphere:";
	cin>>radius;
	volume=(4*3.14*radius*radius*radius)/3;	//volume=(4/3)*(3.14*r*r*r)
	cout<<"volume is :"<<volume;
	getch();
}