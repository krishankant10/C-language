#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int *iptr;
	int var1,var2;
	var1=10;
	var2=20;
	iptr=&var1;
	cout<<"Address and contents of var1 is "<<iptr<<"and"<<*iptr;
	iptr=&var2;
	cout<<"\nAddress and contents of var2 is "<<iptr<<"and"<<*iptr;
	*iptr=125;
	var1=*iptr+1;
	cout<<"\n\nvar1 is :"<<var1<<"or iptr is :"<<*iptr;
	getch();
}