#include <iostream>
#include <conio.h>
using namespace std;
class xyz
{
    int x,y;
public:
    xyz() {}
    xyz(int a,int b)
    {
        x=a;
        y=b;
    }
    void show()
    {
        cout<<"X=  "<<x<<endl;
        cout<<"Y=  "<<y<<endl;
    }
    xyz operator +(xyz m)
    {
        xyz p;
        p.x=x+m.x;
        p.y=y+m.y;
        return p;
    }
};
int main()
{
    xyz obj1(15,23),obj2(16,-16),obj3;
    obj3=obj1+obj2;
    cout<<"object 1-"<<endl;
    obj1.show();
    cout<<"object 2-"<<endl;
    obj2.show();
    cout<<"object 3-"<<endl;
    obj3.show();
    return 0;
}
