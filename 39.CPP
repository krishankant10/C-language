//Q39. unary operator (++) and (--) overloading
#include<iostream.h>
#include <conio.h>
class index
{
	int value;
     public:
	index()
	{
		value=0;
	}
	int getindex()
	{
		return value;
	}
	void operator ++()
	{
		value=value+1;
	}
	void operator --()
	{
		value=value-1;
	}
};
void main()
{
	index idx1,idx2;
	clrscr();
	cout<<"\n Index1 ="<<idx1.getindex();
	cout<<"\n Index2 ="<<idx2.getindex();
	++idx1;
	idx2++;
	idx2++;
	cout<<"\n Index1 ="<<idx1.getindex();
	cout<<"\n Index2 ="<<idx2.getindex();
	--idx1;
	idx2--;
	cout<<"\n Index1 ="<<idx1.getindex();
	cout<<"\n Index2 ="<<idx2.getindex();
	getch();
}
