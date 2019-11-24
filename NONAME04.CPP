#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int max1=0,max2=0,max3=0;
	int arr[6];
	cout<<"Enter array element :";
	for(int i=0;i<5;i++)
		cin>>arr[i];

	for(i=0;i<5;i++)
	{
		if(arr[i]>max1)
		{
			max2=max1;
			max1=arr[i];
		}
		else
		if(max2<arr[i])
		{
			max3=max2;
			max2=arr[i];
		}
		else
		if(max3<arr[i])
		{
			max3=arr[i];
		}

	}
	cout<<"\nFirst largest is :"<<max1;
	cout<<"\nSecond largest is :"<<max2;
	cout<<"\nThird largest is :"<<max3;
	getch();
}