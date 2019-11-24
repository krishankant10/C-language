#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
void main()
{
	cout.setf(ios::showpoint);
	clrscr();
	cout<<setw(5)<<"\n"
	    <<setw(15)<<"Inverse_OF_N"
	    <<setw(15)<<"Sum_Of_n\n\n
	    ";

	double term,sum=0;
	for(int n=1;n<=10;n++)
	{
		term=1.0/float(n);
		sum=sum+term;
		cout<<setw(5)<<n
		    <<setw(14)<<setprecision(4)
		    <<setiosflags(ios::scientific)<<term
		    <<setw(13)<<resetiosflags(ios::scientific)
		    <<sum<<endl;
	}
	getch();
}