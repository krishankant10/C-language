#include <iostream.h>
#include <conio.h>
#include<stdlib.h>
void matmul(int **a,int m,int n,int **b,int p,int q,int **c)
{
	int i,j,k;
	if(n!=p)
	{
		cout<<"Error: Invalid Matrix order for Matrix Multipication";
		return;
	}
	for(i=0;i<m;i++)
	  for(j=0;j<q;j++)
	  {
		c[i][j]=0;
		for(k=0;k<n;k++)
		c[i][j]+=a[i][k]*b[k][j];
	  }
}
void matsum(int **a,int m,int n,int **b,int p,int q,int **c)
{
	int i,j;
	if(m!=p&&n!=q)
	{
		cout<<"Error: Invalid matrix Order for sum";
		return;
	}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		c[i][j]=a[i][j]+b[i][j];
}
void matsub(int **a,int m,int n,int **b,int p,int q,int **c)
{
	int i,j;
	if(m!=p&&n!=q)
	{
		cout<<"Error: Invalid matrix Order for subtraction";
		return;
	}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		c[i][j]=a[i][j]-b[i][j];
}
void matshow(int **a,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
	cout<<endl;
	for(j=0;j<col;j++)
		cout<<a[i][j]<<"   ";
	}
}
void main()
{
	clrscr();
	int **a,**b,**c;
	int m,n,p,q;
	cout<<"Enter matrix A details"<<endl;
	cout<<"How many Rows?:";
	cin>>m;
	cout<<"How many Columns?:";
	cin>>n;
	a=new int *[m];
	for(int i=0;i<m;i++)
	  a[i]=new int[n];
	for(i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	   {
		cout<<"Matrix A["<<i<<","<<j<<"]=?";
		cin>>a[i][j];
	   }
	cout<<"Enter matrix B details"<<endl;
	cout<<"How many Rows?:";
	cin>>p;
	cout<<"How many Columns?:";
	cin>>q;
	b=new int *[p];
	for(i=0;i<p;i++)
	  b[i]=new int[q];
	for(i=0;i<m;i++)
	   for(j=0;j<n;j++)
	   {
		cout<<"Matrix B["<<i<<","<<j<<"]=?";
		cin>>b[i][j];
	   }
	cout<<"\n\nMatrix A is \n";
	matshow(a,m,n);
	cout<<"\n\nMatrix B is \n";
	matshow(b,p,q);
	while(1)
	{
		int k;
		clrscr();
		gotoxy(30,12);
		cout<<"1:Maltipication";
		gotoxy(30,14);
		cout<<"2:Sum";
		gotoxy(30,16);
		cout<<"3:Subtraction";
		gotoxy(30,18);
		cout<<"4: Exit";
		gotoxy(30,8);
		cout<<"Choose Any One:";
		cin>>k;
		switch(k)
		{
		case 1:
			clrscr();
			c=new int *[m];
			for(i=0;i<m;i++)
			  c[i]=new int[q];
			matmul(a,m,n,b,p,q,c);
			cout<<"\n\nMatrix C=A*B is \n";
			matshow(c,m,q);
			delete c;
			getch();
			break;
		case 2:
			clrscr();
			c=new int *[m];
			for(i=0;i<m;i++)
			  c[i]=new int[q];
			matsum(a,m,n,b,p,q,c);
			cout<<"\n\nMatrix C=A+B is \n";
			matshow(c,m,q);
			delete c;
			getch();
			break;
		case 3:
			clrscr();
			c=new int *[m];
			for(i=0;i<m;i++)
			  c[i]=new int[q];
			matsub(a,m,n,b,p,q,c);
			cout<<"\n\nMatrix C=A-B is \n";
			matshow(c,m,q);
			delete c;
			getch();
			break;
		case 4:
			exit(1);
		}
	}
getch();
}






