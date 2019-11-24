#include <iostream.h>
#include <conio.h>
class base
{
    public:
	void display()
	{
		cout<<"\n Display Base";
	}
	virtual void show()
	{
		cout<<"\n Show Base";
	}
};
class derived  : public base
{
    public:
	void display()
	{
		cout<<"\n Display derived";
	}
	void show()
	{
		cout<<"\n Show Derived";
	}
};
void main()
{
	clrscr();
	base b;
	derived d;
	base *bptr;
	cout<<"\n bptr points to base";
	bptr=&b;
	bptr->display();
	bptr->show();
	cout<<"\n\n bptr points to derived";
	bptr = &d;
	bptr->display();
	bptr->show();
	getch();
}