#include <iostream>
#include <conio.h>
using namespace std;
class xyz
{
    int x,y;
public:
    void get(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"X="<<x<<endl;
        cout<<"Y="<<y<<endl;
    }
    void operator -()
    {
        x=-x;
        y=-y;
    }
};
int main()
{
    xyz obj;
    obj.get(87,-90);
    obj.show();
    -obj;
    obj.show();
    getch();
}
