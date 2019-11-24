#include <iostream.h>
#include <conio.h>
#include <string.h>
long fact(int num)
{
	if(num==0)
	   return 1;
	else
		return num * fact(num-1);
}
void main()
{
	clrscr();
	int n;
	long (*ptrfact)(int);
	ptrfact=fact;
	cout<<"Enter the Number Whose Factorial is to be found:";
	cin>>n;
	long f1=(*ptrfact)(n);
	cout<<"The factorial of '"<<n<<"'is :  "<<f1<<endl;
	cout<<"The factorial of '"<<n+1<<"'Is  :  "<<ptrfact(n+1)<<endl;
	getch();
}



