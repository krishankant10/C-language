#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int i,n,small,*ptr,a[50];
	cout<<"Size of the array ? ";
	cin>>n;
	cout<<"Array element ?\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	ptr=a;
	small=*ptr;
	ptr++;
	for(i=0;i<n;i++)
	{
		if(small>*ptr)
		small=*ptr;
		ptr++;
	}
	cout<<"\n\nSmallest Element is :"<<small;
	getch();
}