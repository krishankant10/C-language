#include <iostream.h>
#include <conio.h>
void main()
{
	int num[]={10,20,30,40,50};
	int *ptr,i;
	clrscr();
	cout<<"The array value are:\n";
	for(i=0;i<5;i++)
		cout<<num[i]<<"\t";
	ptr=num;
	cout<<"\n Value of ptr :"<<*ptr;
	ptr++;
	cout<<"\n\nValue of Ptr++:"<<*ptr;
	getch();
}