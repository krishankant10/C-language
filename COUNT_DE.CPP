#include <iostream.h>
#include <conio.h>
int i=0,j=0;
class std
{
	public:
	std()
	{
		++i;
		++j;
	}
	~std()
	{
		j--;
	}
	void show()
	{
		cout<<"\n\n\nConstructer call total is :"<<i;
		cout<<"\nTotal destructer called:"<<j;
	}
};
void main()
{
	clrscr();
	std ob1,ob2;
	ob1.show();
	ob2.show();
	{
		std ob1,ob2;
		ob1.show();
		ob2.show();
	}
	std ob3;
	ob1.show();
	ob2.show();
	getch();
}