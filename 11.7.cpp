#include <iostream>
#include <conio.h>
using namespace std;
class abc
{
    int a,b;
public:
    void getdata(int x,int y)
    {
        a=x;
        y=b;
    }
    void show()
    {
        cout<<"A=  "<<a<<endl;
        cout<<"B=  "<<b<<endl;
    }
    friend void operator--(abc &);
};
void operator--(abc &s)
{
    s.a--;
    s.b--;
}
int main()
{
    abc obj;
    obj.getdata(5,8);
    cout<<"Values Before operation..."<<endl;
    obj.show();
    obj--;
    cout<<"Values after operation...."<<endl;
    obj.show();
    getch();

}
