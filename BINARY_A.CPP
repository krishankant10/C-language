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
			cout<<"Real Part ?";
			cin>>real;
			cout<<"Imag Part ?";
			cin>>imag;
		}
		complex operator + (complex c2);
		complex operator - (complex c2);
		complex operator * (complex c2);
		complex operator / (complex c2);
		void outdata(char *msg)
		{
			cout<<endl<<msg;
			cout<<"("<<real;
			cout<<", "<<imag<<")";
		}
};
complex complex::operator + (complex c2)
{
	complex temp;
	temp.real=real+c2.real;
	temp.imag=imag+c2.imag;
	return(temp);
}
complex complex::operator - (complex c2)
{
	complex temp;
	temp.real=real-c2.real;
	temp.imag=imag-c2.imag;
	return(temp);
}
complex complex::operator * (complex c2)
{
	complex temp;
	temp.real=real*c2.real;
	temp.imag=imag*c2.imag;
	return(temp);
}
complex complex::operator / (complex c2)
{
	complex temp;
	temp.real=real/c2.real;
	temp.imag=imag/c2.imag;
	return(temp);
}
void main()
{
	clrscr();
	complex c1,c2,c3;
	cout<<"Enter complex Number c1..."<<endl;
	c1.getdata();
	cout<<"Enter Complex Number c2..."<<endl;
	c2.getdata();
	c1.outdata("C1=  ");
	c2.outdata("C2=  ");
	c3=c1+c2;
	c3.outdata("C3=C1+C2:");
	c3=c1-c2;
	c3.outdata("C3=C1-C2:");
	c3=c1*c2;
	c3.outdata("C3=C1*C2:");
	c3=c1/c2;
	c3.outdata("C3=C1/C2:");
	c3=c1+c2+c1+c2;
	c3.outdata("C3=C1+C2+C1+C2:");
	c3=(c1*c2+c1)/(c2);
	c3.outdata("C3=C1*C2+C1/C2:");
	getch();
}


