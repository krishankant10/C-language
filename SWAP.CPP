#include <iostream.h>
#include <conio.h>
void swap(float *,float *);
void main()
{
	clrscr();
	float a,b;
	cout<<"Enter Real No.";
	cin>>a;
	cout<<"Enter real number.";
	cin>>b;
	swap(&a,&b);
	cout<<"After swaping.............\n";
	cout<<"A contains"<<a<<endl;
	cout<<"\nB contains"<<b;
	getch();
}
void swap(float *pa,float *pb)
{
	float temp;
	temp=*pa;
	*pa=*pb;
	*pb=temp;
}