#include <iostream.h>
#include <conio.h>
class vehical
{
	private:
		int a,b;
	public:
		virtual void spec()=0;
};
class lmv: public vehical
{
	public:
		void spec()
		{
			cout<<"I am in lmv class\n\n";
		}
};
class hmv: public vehical
{
	public:
		void spec()
		{
			cout<<"I am in hmv class\n\n";
		}
};
class tw: public vehical
{
	public:
		void spec()
		{
			cout<<"I am in tw class\n\n";
		}
};
void main()
{
	tw t;
	hmv h;
	lmv l;
	clrscr();
	t.spec();
	h.spec();
	l.spec();
	getch();
}



