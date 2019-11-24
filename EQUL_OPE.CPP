#include <iostream.h>
#include <conio.h>
template <class T>
class curr
{
	T rs,us;
   public:
	void rupee(T rup)
	{
		rs=rup;
	}
	void dollar(T dol)
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
		cout<<"\tRS is :"<<rs;
		cout<<"\tUS is :"<<us;
	}

};
void main()
{
	clrscr();
	float a=10,b=20;
	float d=20.4,c=10.4;
	curr <float> r1,r2,d1,d2;
	r1.rupee(a);
	r2.rupee(b);
	d1.rupee(d);
	d2.rupee(c);
	r1.dollar(a);
	r2.dollar(b);
	d1.dollar(d);
	d2.dollar(c);
	cout<<"\nR1 is:\n";
	r1.show();
	cout<<"\nR2 is:\n";
	r2.show();
	cout<<"\nD1 is:\n";
	d1.show();
	cout<<"\nD2 is:\n";
	d2.show();
	cout<<endl;

	r1=d1;
	r2=d2;

	cout<<"\n\nR1 is:\n";
	r1.show();
	cout<<"\n\nR2 is:\n";
	r2.show();
	cout<<"\n\nD1 is:\n";
	d1.show();
	cout<<"\n\nD2 is:\n";
	d2.show();
	cout<<endl;
	getch();
}

