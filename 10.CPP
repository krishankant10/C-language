//Q.10 volume of a cylinder
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	float height,radius,volume;
	cout<<"Enter the height of the cylinder:";
	cin>>height;
	cout<<"Enter radius of the cylinder:";
	cin>>radius;
	volume=3.14*radius*radius*height;
	cout<<"The volume of the cylinder is :"<<volume;
	getch();
}