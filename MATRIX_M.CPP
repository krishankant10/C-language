#include <iostream.h>
#include <conio.h>
#include <process.h>
int **matalloc(int row,int col)
{
	int **p;
	p=new int *[row];
	for(int i=0;i<row;i++)
	p[i]=new int [col];
	return p;
}
void matrelease(int **p,int row)
{
	for(int i=0;i<row;i++)
		delete p[i];
		delete p;
}
void matread(int **a,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
	{
		cout<<"Matrix["<<i<<","<<j<<"]=?";
		cin>>a[i][j];
	}
}
void matmul(int **a,int m,int n,int **b,int p,int q,int **c)
{
	int i,j,k;
	if(n!=p)
	{
		cout<<"Error :invalid matrix order for multiplication";
		exit(1);
	}
	for(i=0;i<m;i++)
	  for(j=0;j<q;j++)
	  {
		c[i][j]=0;
		for(k=0;k<n;k++)
		c[i][j]+=a[i][k]*b[k][j];
	  }
}
void matshow(int **a,int row,int col)
{
	int i,j;
	for(i=0;i<row;i++)
	{
		cout<<endl;
		for(j=0;j<col;j++)
		cout<<a[i][j]<<" ";
	}
}
void main()
{
	int **a,**b,**c;
	int m,n,p,q;
	clrscr();
	cout<<"Enter Matrix a Details........."<<endl;
	cout<<"How many Rows ?";
	cin>>m;
	cout<<"How Many column ?";
	cin>>n;
	a=matalloc(m,n);
	matread(a,m,n);
	cout<<"Enter Matrix b Details........."<<endl;
	cout<<"How many Rows ?";
	cin>>p;
	cout<<"How Many column ?";
	cin>>q;
	b=matalloc(p,q);
	matread(b,p,q);
	c=matalloc(m,q);
	matmul(a,m,n,b,p,q,c);
	cout<<"\n\n\nMatrix C =A*B.............\n\n";
	matshow(c,m,q);
	getch();
}