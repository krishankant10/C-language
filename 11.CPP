//Q11. area and perimeter of a rectangle
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	float lenth,width,area,perimeter;
	cout<<"Enter lenth of a rectangle:";
	cin>>lenth;
	cout<<"Enter width of a rectangle:";
	cin>>width;
	area=width*lenth;
	perimeter=2*(lenth+width);
	cout<<"\nArea is :"<<area;
	cout<<"\n\nPerimeter is :"<<perimeter;
	getch();
}