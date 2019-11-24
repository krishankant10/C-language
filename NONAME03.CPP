#include <iostream.h>
#include <conio.h>
template <class T>
class curr
{
	T rs,us;
   public:
	rupee(T rup)
	{
		rup=rs;
	}
	dollar(T dol)
	{
		us=dol;
	}
	void operator =(curr c1)
	{
		rs=c1.us;
		us=c1.rs;
	}
	void show()
	{
		cout<<"\nRS is :"<<rs;
		cout<<"\nUS is :"<<us;
	}

};
void main()
{
	clrscr();
	float r1=10,r2=20;
	float d1=20.4,d2=10.4;
	curr <float> r1,r2,d1,d2;
	cout<<"\n\nR1 is:\n";
	r1.show();
	cout<<"\n\nR2 is:\n";
	r2.show();
	cout<<"\n\nD1 is:\n";
	d1.show();
	cout<<"\n\nD2 is:\n";
	d2.show();

	d1=r2;
	r1=d2;

	cout<<"\n\nR1 is:\n";
	r1.show();
	cout<<"\n\nR2 is:\n";
	r2.show();
	cout<<"\n\nD1 is:\n";
	d1.show();
	cout<<"\n\nD2 is:\n";
	d2.show();
	r1.show();
	getch();
}

