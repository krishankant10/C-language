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
	index operator ++()
	{
		index temp;
		value=value+1;
		temp.value=value;
		return temp;
	}
};
void main()
{
	index idx1,idx2;
	clrscr();
	cout<<"\n Index1 ="<<idx1.getindex();
	cout<<"\n Index2 ="<<idx2.getindex();
	idx1=idx2++;
	idx2++;
	cout<<"\n Index1 ="<<idx1.getindex();
	cout<<"\n Index2 ="<<idx2.getindex();
	getch();
}
