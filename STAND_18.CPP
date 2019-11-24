#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
	clrscr();
	char *string1="Krishankant";
	char *string2=" With C++";
	int i;
	int len1=strlen(string1);
	int len2=strlen(string2);
	for(i=1;i<len1;i++)
	{
		cout.write(string1,i);
		cout<<endl;
	}
	for(i=len1;i>0;i--)
	{
		cout.write(string1,i);
		cout<<endl;
	}
	cout.write(string1,len1);
	cout<<endl;
	cout.write(string2,len2);
	cout<<endl;
	cout.write(string1,len1).write(string2,len2);
	cout<<endl;
	getch();
}