//Q18. area of equilateral triangle
#include <iostream.h>
#include <conio.h>
#include <math.h>
void main()
{
	clrscr();
	float area, side;
	cout<<"Enter Side of equilateral triangle:";
	cin>>side;
	area=(sqrt(3)/4)*(side*side);
	cout<<"Area of equilateral triangle is :"<<area;
	getch();
}
