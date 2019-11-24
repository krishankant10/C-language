#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	clrscr();
	char a[10][10];
	int i,j,row,col,l=0;
	printf("Enter How many :");
	scanf("%d",&row);

	for(i=0;i<row;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<row;i++)
	{
		for(j=0;a[i][j]!=NULL;j++)
			l++;
		printf("\nLength is : %d",l);

		l=0;
	}
	getch();
}

