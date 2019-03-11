//C++ program for unary logical NOT (!) operator overloading.

#include<iostream.h>
#include <conio.h>
class NUM
{
    private:
	int n;

    public:
	void getNum(int x)
	{
	    n=x;
	}
	void dispNum(void)
	{
	    cout << "value of n is: " << n;
	}
	void operator ! (void)
	{
	    n=!n;
	}
};
int main()
{
    clrscr();
    NUM num;
    num.getNum(20);
    cout << "Before calling Operator Overloading:";
    num.dispNum();
    cout << endl;

    !num;
    cout << "After  calling Operator Overloading:";
    num.dispNum();
    cout << endl;
    getch();
}