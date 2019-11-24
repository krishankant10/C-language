#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <iomanip.h>
void main()
{
	int num;
	clrscr();
	cout<<"Enter Any Integer No.:";
	cin>>num;
	cout<<"-------------------------------------------------"<<endl;
	cout<<setw(5)<<"NUM"<<setw(10)<<"SQR";
	cout<<setw(15)<<"SQRT"<<setw(15)<<"LOG"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	cout.setf(ios::showpoint);
	for(int i=1;i<=num;i++)
	{
		cout<<setw(5)<<i
		<<setw(10)<<(i*i)
		<<setw(15)<<setprecision(3)<<sqrt((double)i)
		<<setw(15)<<setprecision(4)<<setiosflags(ios::scientific)
		<<log((double)i)<<endl<<resetiosflags(ios::scientific);
	}
	cout<<"--------------------------------------------------"<<endl;
	getch();
}