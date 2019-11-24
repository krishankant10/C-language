#include<iostream.h>
#include <conio.h>
class index
{
	private:
		int value;
	public:
		index()
		{
			value=0;
		}
		index (int v)
		{
			value=v;
		}
		int getindex()
		{
			return value;
		}
		index operator ++()
		{
			return index(++value);
		}
		index operator ++(int)
		{
			return index (value++);
		}
};
void main()
{
	clrscr();
	index idx1(2),idx2(2),idx3,idx4;
	cout<<"\n Index1="<<idx1.getindex();
	cout<<"\n Index2="<<idx2.getindex();
	idx3=idx1++;
	idx4=++idx2;
	cout<<"\n Index1="<<idx1.getindex();
	cout<<"\n Index2="<<idx2.getindex();
	cout<<"\n Index3="<<idx3.getindex();
	cout<<"\n Index4="<<idx4.getindex();
	getch();
}