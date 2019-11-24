#include <iostream.h>
#include <conio.h>
template <class T1,class T2>
class test
{
	T1 a;
	T2 b;
   public:
	test(T1 x,T2 y)
	{
		a=x;
		b=y;
	}
	void show()
	{
		cout<<a<<"And"<<b<<"\n";
	}
};
void main()
{
	cout<<"Instantiating the class template as test1 with int and char data types...\n test1:";
	test<float,int>test1(1.23,123);
	test1.show();

	cout<<"Instantiating the class template as test2 with int and char data types...\n test2:";
	test<int,char>test2(1.23,'W');
	test2.show();

	getch();
}