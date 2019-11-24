#include<iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	clrscr();
	int i,j;
	char str[]="C++is better then C";
	int len=strlen(str);
	char *substr=new char[len];
	cout<<"The main string is :"<<str;
	cout<<"\n\nEnter the substring to be searched:";
	cin>>substr;
	int k,len2=strlen(substr);
	for(i=0;i<len;i++)
	{
		k=i;
		for(j=0;j<len2;j++)
		{
			if(str[k]==substr[j])
			{
				if(j==len2-1)
				{
					cout<<"\n The substring is present in the main string";
					getch();
					exit(0);
				}
				k++;
			}
			else
			break;
		}
	}
	if(i==len)
	cout<<"\n The substring is not present in the main string";
	getch();
}




