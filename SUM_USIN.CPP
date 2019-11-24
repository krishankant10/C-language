#include <iostream.h>
#include <conio.h>
void main()
{
	int *ptr1,*ptr2,a,b;
	clrscr();
	cout<<"Enter two Digit:";
	cin>>a>>b;
	ptr1=&a;
	ptr2=&b;
	cout<<"\nSum is Ptr1+ptr2="<<*ptr1+*ptr2;
	cout<<"\nSubtraction is Ptr1-ptr2="<<*ptr1-*ptr2;
	cout<<"\nMul. is Ptr1*ptr2="<<*ptr1**ptr2;
	cout<<"\nDevi is Ptr1/ptr2="<<*ptr1/(*ptr2);
	getch();
}