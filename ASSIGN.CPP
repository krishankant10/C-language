#include<iostream.h>
#include<conio.h>
void getdata()
{
	int a[10][10];
	int rows,cols,i,j;
	clrscr();
	cout<<"\n\t\t\t Print a Matrix \t\t\t\n";
	cout<<"\nEnter rows ";
	cin>>rows;
	cout<<"\nEnter Cols ";
	cin>>cols;
	cout<<"\nEnter the Element in matrix ";
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	cin>>*(*(a+i)+j);
	cout<<"\n Matrix is : \n";
	for(i=0;i<rows;i++)
	{
	for(j=0;j<cols;j++)
	{
	cout<<"\t"<<*(*(a+i)+j);
	}
	cout<<endl;
	}
	getch();
	clrscr();
}
void setdata()
{
	int a[10][10],b[10][10],c[10][10];
	int rows,cols,i,j;
	clrscr();
	cout<<"\n\t\t\tSum of two matrix\t\t\t\n";
	cout<<"\nEnter rows ";
	cin>>rows;
	cout<<"\nEnter Cols ";
	cin>>cols;
	cout<<"\nEnter the Element of matrix A ";
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	cin>>*(*(a+i)+j);
	cout<<"\nEnter the Element of matrix B ";
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	cin>>*(*(b+i)+j);
	clrscr();
	cout<<"\nA Matrix is : \n";
	for(i=0;i<rows;i++)
	{
	for(j=0;j<cols;j++)
	{
	cout<<"\t"<<*(*(a+i)+j);
	}
	cout<<endl;
	}
	cout<<"\n B Matrix is : \n";
	for(i=0;i<rows;i++)
	{
	for(j=0;j<cols;j++)
	{
	cout<<"\t"<<*(*(b+i)+j);
	}
	cout<<endl;
	}
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	c[i][j]=a[i][j]+b[i][j];
	cout<<"\n Sum of Matrix A & Matrix B is :\n ";
	for(i=0;i<rows;i++)
	{
	for(j=0;j<cols;j++)
	{
	 cout<<"\t "<<c[i][j];
	}
	cout<<endl;
	}
	getch();

}
void trans()
{
	int p[10][10],q[10][10];
	int rows,cols,i,j;
	clrscr();
	cout<<"\n\t\t\t Transpose of a Matrix \t\t\t\n";
	cout<<"\nEnter rows ";
	cin>>rows;
	cout<<"\nEnter Cols ";
	cin>>cols;
	cout<<"\nEnter the Element in matrix ";
	for(i=0;i<rows;i++)
	for(j=0;j<cols;j++)
	cin>>*(*(p+i)+j);
	cout<<"\n Matrix is : \n";
	for(i=0;i<rows;i++)
	{
	for(j=0;j<cols;j++)
	{
	cout<<"\t"<<*(*(p+i)+j);
	}
	cout<<endl;
	}

	for(i=0;i<cols;i++)
	{
		for(j=0;j<rows;j++)
		{
		q[i][j]=p[j][i];
		}
	}
	cout<<endl;
	for(i=0;i<rows;i++)
	{
	for(j=0;j<cols;j++)
	{
	cout<<"\t"<<*(*(q+i)+j);
	}
	cout<<endl;
	}

}
void main()
{
	clrscr();
	getdata();
	setdata();
       trans();
	getch();
}