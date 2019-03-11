//Q25. demostrate default constructor 
#include <iostream.h>
#include <conio.h>
class construct
{
public:
    int a, b;

	// Default Constructor
    construct()
    {
	a = 10;
	b = 20;
    }
};

void main()
{
	clrscr();
	// Default constructor called automatically
	// when the object is created
    construct c;
    cout << "a: "<< c.a << endl << "b: "<< c.b;
    getch();
}