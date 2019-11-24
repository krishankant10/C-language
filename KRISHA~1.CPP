#include <iostream.h>
#include <stdio.h>
#include <conio.h>
int fact(int m)
{
	int p=1;
	for(int i=m;i>=1;i--)
	{
		p=p*i;
	}
	return p;
};
int krishanmurthy(int j)
{
	int m,r,s,c=0;
	m=j;
	while(m>0)
	{
		r=m%10;
		s=1;
		s=fact(r);
		c=c+s;
		m=m/10;
	}
	if(c==j)
		return 1;
	else
		return 0;
};
void main()
{
	double *ptr,i,j;
	clrscr();
	cout<<"Enter a no.:";
	scanf("%lf",ptr);
	for(i=1;i<=(*ptr);i++)
	{
		j=krishanmurthy(i);
		if(j==1)
			cout<<i<<",";
	}
	getch();
}