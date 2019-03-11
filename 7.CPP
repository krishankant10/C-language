//Q7. swaping two no
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int n1,n2;
	cout<<"Enter First no: ";
	cin>>n1;
	cout<<"Enter Second No.: ";
	cin>>n2;
	int temp=n1;
	n1=n2;
	n2=temp;
	cout<<"First Element is: "<<n2;
	cout<<"\nSecond element is :"<<n1;
	getch();
}