#include <iostream.h>
#include <conio.h>
void show(int a[][3],int m)
{
	int (*c)[3];
	c=a;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<3;j++)
			cout<<c[i][j]<<" ";
			cout<<endl;
	}
}
void main()
{
	clrscr();
	int c[2][3]={{1,2,3,},{4,5,6,}};
	show(c,2);
	getch();
}