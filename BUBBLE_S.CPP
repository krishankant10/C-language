#include <iostream.h>
#include <conio.h>
template<class T>
void bubble(T a[],int n)
{
	//cout<<"n-1 is"<<n-1;
	for(int i=0;i<n-1;i++)
		for(int j=n-1;i<j;j--)
			if(a[j]<a[j-1])
			{
				swap(a[j],a[j-1]);
			}
}
template <class X>
void swap(X &a,X &b)
{
	X temp=a;
	a=b;
	b=temp;
}
void main()
{
	clrscr();
	int x[5]={10,23,45,67,5};
	float y[5]={1.2,5.3,1.7,4.7,2.2};
	bubble(x,5);
	bubble(y,5);
	cout<<"Sorted int Array:";
	for(int i=0;i<5;i++)
		cout<<x[i]<<"  ";
	cout<<endl<<endl;
	cout<<"Sorted float Array:";
	for(i=0;i<5;i++)
		cout<<y[i]<<"  ";
	getch();
}