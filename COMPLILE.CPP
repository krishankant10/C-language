#include <iostream.h>
#include <conio.h>
class base
{
    public:
	void show(int i)
	{
		cout<<"Base class\n"<<i<<endl;
	}
};
class deri: public base
{
    public:
	void show()
	{
		cout<<"Derived calss\n";
	}
};
void main()
{
	clrscr();
	deri d;
	d.show();
	d.base::show(500);
	getch();
}

