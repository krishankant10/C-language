#include <iostream.h>
#include <conio.h>
#include <string.h>
void sortbyptrexchange(char **person,int n)
{
	int i,j,flag;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		flag=1;
		for(j=0;j<(n-1-i);j++)
		{
			if(strcmp(person[j],person[j+1])>0)
			{
				flag=0;
				temp=person[j];
				person[j]=person[j+1];
				person[j+1]=temp;
			}
		}
		if(flag)
		break;
	}
}
void main()
{
	int i,n=0;
	char *person[100];
	char choice;
	do
	{
		person[n]=new char[40];
		cout<<"Enter name: ";
		cin>>person[n++];
		cout<<"enter another (y/n)?";
		cin>>choice;
	}
	while(choice=='y');
	cout<<"\n\n...........Unsorted List........\n";
	for(i=0;i<n;i++)
	cout<<endl<<person[i];
	sortbyptrexchange(person,n);
	cout<<"\n\n...........sorted List........\n";
	for(i=0;i<n;i++)
	cout<<endl<<person[i];
	for(i=0;i<n;i++)
	delete person[i];
	getch();
}



