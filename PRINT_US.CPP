#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
	char *string1="C++";
	char *string2="Programming";
	int m=strlen(string1);
	int n=strlen(string2);
	for(int i=0;i<n;i++)
	{
		cout.write(string2,i);
		cout<<"\n";
	}
	for(i=n;i>0;i--)
	{
		cout.write(string2,i);
		cout<<"\n";
	}
	cout.write(string1,m).write(string,n);
	cout<<"\n";
	cout.write(string1,10);
	getch();
}


