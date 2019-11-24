#include <iostream.h>
#include <conio.h>
int small(int a,int b)
{
	return a<b?a:b;
}
int large(int a,int b)
{
	return a>b?a:b;
}
int select(int (*fn)(int,int),int x,int y)
{
	int value=fn(x,y);
	return value;
}
void main()
{
	int m,n;
	int (*ptrf)(int,int);
	cout<<"Enter Two Integer:";
	cin>>m>>n;
	int high=select(large,m,n);
	ptrf=small;
	int low=select(ptrf,m,n);
	cout<<"Large ="<<high<<endl;
	cout<<"small ="<<low;
	getch();
}

