//swap two number udsing friend function
#include <iostream.h>
#include <conio.h>
class A
{
    public:
	int a,b;
	A(int i,int j)
	{
		a=i;
		b=j;
	}
	void show()
	{
		cout<<"A:"<<a<<endl;
		cout<<"B:"<<b<<endl<<endl;
	}
	friend A swap(A);
};
//friend swap function
A swap(A ob)
{
	int t;
	t=ob.a;
	ob.a=ob.b;
	ob.b=t;
	return ob;
}
void main()
{
	clrscr();
	A obj(10,20);
	obj.show();
	obj=swap(obj);
	obj.show();
	getch();
}

