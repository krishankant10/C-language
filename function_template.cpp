#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
T max(T &a,T &b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    char ch,ch1,ch2;
    cout<<"Enter Two charactors:";
    cin>>ch1>>ch2;
    ch=max(ch1,ch2);
    cout<<"Max Is :"<<ch<<endl;
    int a,b,c;
    cout<<"Enter Two integer:";
    cin>>a>>b;
    c=max(a,b);
    cout<<"Max Is :"<<c<<endl;
    double x,y,z;
    cout<<"Enter Two double:";
    cin>>x>>y;
    z=max(x,y);
    cout<<"Max Is :"<<z<<endl;
    getch();
}
