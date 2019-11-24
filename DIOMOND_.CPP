#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	cout<<"How many line:";
	int n;
	cin>>n;
	int j=0,k=0,l=0,a,b,d,e;
	int m,o;
	char c='A';
	n=n/2;
	textcolor(WHITE+BLINK);
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			textcolor(MAGENTA+BLINK);
			cprintf("%c",c);
			c++;
		}
		c--;
		for(k=n;k>n-i;k--)
		{
			textcolor(WHITE);
			cprintf("KK");
		}
		for(l=0;l<n-i;l++)
		{
			textcolor(YELLOW+BLINK);
			cprintf("%c",c);
			c--;
		}
		cout<<"\n";
		c='A';
	}
	for(i=n;i>0;i--)
	{
		for(j=0;j<=n-i;j++)
		{
			textcolor(YELLOW+BLINK);
			cprintf("%c",c);
			c++;
		}
		c--;
		for(k=n-2;k>=n-i;k--)
		{
			textcolor(WHITE);
			cprintf("KK");
		}
		for(l=0;l<=n-i;l++)
		{
			textcolor(MAGENTA+BLINK);
			cprintf("%c",c);
			c--;
		}
		cout<<"\n";
		c='A';
	}




	getch();
}
