//Q24  class inside another class 
#include<iostream.h>
#include <conio.h>
class A
{
	public:             
	class B
	{
		private:
		int num;
		public:
		void large(int x,int y)
		{
			num=x;
			if(num < y)
				num=y;
		}
		void showdata()
		{
			cout<< "\n Large = "<<num;
		}
	};
};
void main()
{
	clrscr();
	A :: B b;
	b.large(78,89);
	b.showdata();
	getch();
}