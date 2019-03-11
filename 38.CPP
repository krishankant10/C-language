//Q38  operator overloading unary - operator
#include <iostream.h>
#include <conio.h>
class over
{
	int number;
    public:
	over(int nu)
	{
		number=nu;
	}
	int getnumber()
	{
		return number;
	}
	void operator -()
	{
		number=(-1)*number;
	}
};
void main()
{
	clrscr();
	over obj(10);
	cout<<"Default Object is :"<<obj.getnumber();
	-obj;
	cout<<"\nafter - Operator:"<<obj.getnumber();
	getch();
}
