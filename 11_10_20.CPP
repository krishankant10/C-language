#include <iostream.h>
#include <conio.h>
#include <string.h>
void small(int *f,int n);
void largest(int *f,int n);
void main()
{
	clrscr();
	int *p,i,j,num=0;
	cout<<"ENter How many no:";
	cin>>num;
	p=new int[num];
	for(i=0;i<num;i++)
	{
		cout<<"Enter a No:";
		cin>>p[i];
	}
	small(p,num);
	largest(p,num);
	getch();
}
void small(int *f,int n)
{
	int *s=f;
	int i,j;
	j=s[0];
	for(i=0;i<n;i++)
		if(j>f[i])
			j=f[i];
	cout<<"\n\nSmallest no is :"<<j;
}
void largest(int *f,int n)
{
	int *s=f;
	int i,j;
	j=s[0];
	for(i=0;i<n;i++)
	{
		if(j<f[i])
		{
			j=f[i];
		}
	}
	cout<<"\n\nLargest no is :"<<j;
}






