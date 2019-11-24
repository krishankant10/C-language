#include <iostream.h>
#include <conio.h>
ostream & sp(ostream & os)
{
	os<<' '<<flush;
	return os;
}
void main()
{
	clrscr();
	int x=1,y=2,z=3,w=9;
	cout<<x<<sp<<y<<sp<<z<<sp<<w<<endl;
	getch();
}