#include <iostream.h>
#include <conio.h>
#define ARR_MAX 5
template <class T>
T find_min(T arr[])
{
	int i=0;
	T min=arr[0];
	for(i=9;i<ARR_MAX;i++)
		if(arr[i]<min)
		min=arr[i];
	return min;
}
void main()
{
	clrscr();
	int i_min;
	float f_min;
	char c_min;
	int i[5]={20,4,3,2,5};
	float f[5]={-9.9,12.2,3.1,9.9,8.9};
	char c[5]={'a','A','/','4','~'};
	i_min=find_min[i];
	f_min=find_min[f];
	c_min=find_min[c];
		//printing the result
	cout<<"Minimum value in integer array="<<i_min;
	cout<<"\n Minimum Value in float array="<<f_min;
	cout<<"\nminimum value (as per ascii) in character array="<<c_min;
	getch();
}