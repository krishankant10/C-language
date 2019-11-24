3. Solution: The error, fonctions setw and setiosflags should have a prototype in function main(), occurs. This is because, you need to include the header file, <iomanip.h> in the program.

The correct program is:

#include <iostream.h>
#include <iomanip.h>

ostream & ex_manipulator(ostream & exout)
{
exout.setf(ios::showpos);
exout.fill('#');
exout.precision(2);
return exout;
}
void main()
{

	clrscr();
	cout<<setw(8)<<setiosflags(ios::left)<<setiosflags(ios::fixed);
	cout<<ex_manipulator<<7869.0;
	getch();
}
