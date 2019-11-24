#include <iostream.h>
#include <conio.h>
#include <string.h>
void findbig(int *pa,int *pb,int **pbig)
{
	if(*pa>*pb)
	*pbig=pa;
	else
	*pbig=pb;
}
void main()
{
	int a,b,*big;
	clrscr();
	cout<<"ENter Two integer: ";
	cin>>a>>b;
	findbig(&a,&b,&big);
	cout<<"The value as obtained from the pointer :"<<*big;
	getch();
}