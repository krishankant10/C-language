#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int a[20];
	cout<<"Enter 20 integer Values : ";
	for(int i=0;i<20;i++)
	{
		cin>>a[i];
	}
	int cnt=0;
	cout<<"Your Entered values is : ";
	for(i=0;i<20;i++)
		cout<<"\t"<<a[i];
	for(i=0;i<20;i++)
	{
		for(int j=i+1;j<20;j++)
			if(a[i]==a[j])
			{
				a[j]=0;
			}
	}
	cout<<"\nData is : ";
	for(i=0;i<20-cnt;i++)
	if(a[i]!=0)
	cout<<"\t"<<a[i];
getch();
}