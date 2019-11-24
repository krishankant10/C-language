#include <iostream.h>
#include <conio.h>
#include <process.h>
const int true = 1;
const int false =0;
class matrix
{
	private:
		int maxrow;
		int maxcol;
		int **p;
	public:
		matrix()
		{
			maxrow=0;
			maxcol=0;
			p=NULL;
		}
		matrix(int row,int col);
		~matrix();
		void read();
		void show();
		void add(matrix &a,matrix &b);
		void sub(matrix &a,matrix &b);
		void mul(matrix &a,matrix &b);
		int eql(matrix &b);
};
matrix::matrix(int row,int col)
{
	maxrow=row;
	maxcol=col;
	p=new int *[maxrow];
	for(int i=0;i<maxrow;i++)
	p[i]=new int [maxcol];
}
matrix::~matrix()
{
	for(int i=0;i<maxrow;i++)
		delete p[i];
		delete p;
}
void matrix::add(matrix &a,matrix &b)
{
	int i,j;
	maxrow=a.maxrow;
	maxcol=a.maxcol;
	if(a.maxrow!=b.maxrow || a.maxcol!=b.maxcol)
	{
		cout<<"Error : Invalid matrix order for addition:";
		exit(1);
	}
	for(i=0;i<maxrow;i++)
		for(j=0;j<maxcol;j++)
		p[i][j]=a.p[i][j]+b.p[i][j];
}
void matrix::sub(matrix &a,matrix &b)
{
	int i,j;
	maxrow=a.maxrow;
	maxcol=a.maxcol;
	if(a.maxrow!=b.maxrow || a.maxcol!=b.maxcol)
	{
		cout<<"Error : Invalid matrix order for subtraction:";
		exit(1);
	}
	for(i=0;i<maxrow;i++)
		for(j=0;j<maxcol;j++)
		p[i][j]=a.p[i][j]-b.p[i][j];
}
void matrix::mul(matrix &a,matrix &b)
{
	int i,j,k;
	maxrow=a.maxrow;
	maxcol=b.maxcol;
	if(a.maxcol!=b.maxrow)
	{
		cout<<"Invalid matrix order for multipication:";
		exit(1);
	}
	for(i=0;i<a.maxrow;i++)
	  for(j=0;j<b.maxcol;j++)
	  {
		p[i][j]=0;
		for(k=0;k<a.maxcol;k++)
			p[i][j]+=a.p[i][j]*b.p[k][j];

	  }
}
//compare matrix
int matrix::eql(matrix &b)
{
	int i,j;
	for(i=0;i<maxrow;i++)
	 for(j=0;j<maxcol;j++)
		if(p[i][j]!=b.p[i][j])
		return 0;
	 return 1;
}
void matrix :: read()
{
	int i,j;
	for(i=0;i<maxrow;i++)
	  for(j=0;j<maxcol;j++)
	  {
		cout<<"Matrix ["<<i<<","<<j<<"]=?";
		cin>>p[i][j];
	  }
}
void matrix::show()
{
	int i,j;
	for(i=0;i<maxrow;i++)
	{
		cout<<endl;
		for(j=0;j<maxcol;j++)
		cout<<p[i][j]<<"  ";
	}
}
void main()
{
	clrscr();
	int m,n,p,q;
	cout<<"Enter matrix A details:\n";
	cout<<"How many rows:";
	cin>>m;
	cout<<"How many columms:";
	cin>>n;
	matrix a(m,n);
	a.read();
	cout<<"Enter matrix B details:\n";
	cout<<"How many rows:";
	cin>>p;
	cout<<"How many columms:";
	cin>>q;
	matrix b(p,q);
	b.read();
	cout<<"Matrix A is :\n";
	a.show();
	cout<<"Matrix B is :\n";
	b.show();
	matrix c(m,n);
	c.add(a,b);
	cout<<endl<<"C=A+B......\n";
	c.show();
	matrix d(m,n);
	d.sub(a,b);
	cout<<endl<<"D=A-B......\n";
	d.show();
	matrix e(m,q);
	e.mul(a,b);
	cout<<endl<<"E=A*B......\n";
	e.show();
	cout<<endl<<"(Is matrix A Equal to matrix B)?";
	if(a.eql(b))
		cout<<"Yes";
	else
		cout<<"No";
	getch();
}
