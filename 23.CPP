//Q23 .friend class function
#include <iostream.h>
#include <conio.h>
class example
{
  private:
    int a;
  public:
    void getdata()
    {
	cout <<"Enter value of a:";
	cin >>a;
    }
    friend void findmax(example, example);
/* Declaring friend function inside class */
};

void findmax(example e1, example e2)
/* Defining friend function */
{
    if (e1.a > e2.a)
/* Accessing private members */
	cout <<"Data of object e1 is greater";
    else if (e1.a < e2.a)
	cout <<"Data of object e2 is greater";
    else
	cout <<"Data of object e1 and e2 are equal";
}

void main()
{
    clrscr();
    example e1, e2;
    cout <<"Enter data for e1"<<endl;
    e1.getdata();
    cout <<"Enter data for e2"<<endl;
    e2.getdata();
    findmax(e1, e2);
/* Calling friend function */
    getch();
}