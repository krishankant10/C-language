#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int convert(long long);
int main()
{
	//clrscr();
	long long bn;
	cout<<"\n Enter Binary Number : ";
	cin>>bn;
	cout<<"\n Binary Number to Octal Number : " <<convert(bn);
	getch();
}
int convert(long long bn)
{
	int on = 0, dn = 0, i = 0;
	while(bn != 0)
	{
		dn += (bn % 10) * pow(2,i);
		++i;
		bn /= 10;
	}
	i = 1;
	while (dn != 0)
	{
		on += (dn % 8) * i;
		dn /= 8;
		i *= 10;
	}
	return on;
}
