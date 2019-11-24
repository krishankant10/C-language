#include <iostream.h>
#include <conio.h>
class complex
{
	private:
	  float real;
	  float imag;
	public:
	  complex()
	  {
		real=imag=0.0;
	  }
	  void getdata()
	  {
		cout<<"Real Part ?:";
		cin>>real;
		cout<<"Imag Part ?:";
		cin>>imag;
	  }
	  void outdata(char *msg)
	  {
		cout<<endl<<msg;
		cout<<"("<<real;
		cout<<","<<imag<<")";
	  }
	  complex operator += (complex c2)
	  {
		real=real+c2.real;
		imag=imag+c2.imag;
		return(*this);
	  }
};

void main()
{
	clrscr();
	complex c1,c2,c3;
	cout<<"Enter complex Number c1..."<<endl;
	c1.getdata();
	cout<<"Enter complex number c2..."<<endl;
	c2.getdata();
	c3=c1+=c2;
	cout<<"\n On execution of c3=c1+=c2....";
	c1.outdata("Complex c1:");
	c2.outdata("complex c2:");
	c3.outdata("complex c3:");
	getch();
}





