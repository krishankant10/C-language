#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int il=100;
	float fl=200.5;
	void *vptr;
	vptr=&il;
	cout<<"il contains"<<*((int *)vptr)<<endl;
	vptr=&fl;
	cout<<"fl contains"<<*((float *)vptr)<<endl;
	getch();
}