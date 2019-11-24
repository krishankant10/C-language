#include <iostream.h>
#include <conio.h>
class invent2;
class invent1
{
	int code,items;
	float price;
   public:
	invent1(int a,int b,float c)
	{
		code=a;
		items=b;
		price=c;
	}
	void putdata()
	{
		cout<<"\nCode: "<<code<<endl;
		cout<<"Items: "<<items<<endl;
		cout<<"avalue: "<<price<<endl;
	}
	int getcode()
	{
		return code;
	}
	int getitems()
	{
		return items;
	}
	float getprice()
	{
		return price;
	}
	operator float ()
	{
		return(items*price);
	}
};
class invent2
{
	int code;
	float value;
   public:
	invent2()
	{
		code=0;value=0;
	}
	invent2(int x,float y)
	{
		code=x;
		value=y;
	}
	void putdata()
	{
		cout<<"\n\n\nCode:  "<<code<<endl;
		cout<<"Value is  :  "<<value<<endl;
	}
	invent2(invent1 p)
	{
		code=p.getcode();
		value=p.getitems()*p.getprice();
	}
};
int main()
{
	clrscr();
	invent1 s1(100,5,189.98);
	invent2 d1;
	float total_value;
	total_value=s1;
	d1=s1;
	cout<<"Product Details.......- invent1 type...\n";
	s1.putdata();
	cout<<"\n stock value"<<"\n";
	cout<<"Value="<<total_value<<"\n\n";
	cout<<"Product Details.......- invent2 type...\n";
	d1.putdata();
	getch();
}

