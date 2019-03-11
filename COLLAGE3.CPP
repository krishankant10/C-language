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
	cout<<"\n Binary Number to Hexadecimal Number : " <<convert(bn);
	getch();
}
int convert(long long bn)
{
	int hdn = 0, dn = 0, i = 0;
	while(bn != 0)
	{
		dn += (bn % 10) * pow(2,i);
		++i;
		bn /= 10;
	}
	i = 1;
	while (dn != 0)
	{
		hdn += (dn % 16) * i;
		dn /= 16;
		i *= 10;
	}
	return hdn;
}
