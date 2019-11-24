#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
    float a,b;
public:
    void getdata()
    {
        cout<<"Enter two no:\n";
        cin>>a>>b;
    }
    void result()
    {
            cout<<"\na is :="<<a;
            cout<<"\nb is :="<<b;
    }
    void show(complex m,complex n)
    {
        cout<<"\n"<<m.a<<"/"<<n.a<<"="<<a;
        cout<<"\n"<<m.b<<"/"<<n.b<<"="<<b;
    }
    complex  operator / (complex const &x)
    {
        complex temp;
        if(x.a==0)
        {
            cout<<"\n\nError in first Dividetion:";
            throw x.a;
        }
        else
            temp.a=a/x.a;
        if(x.b==0)
        {
            cout<<"\n\nError in second Dividetion";
            throw x.b;
        }
        temp.b=b/x.b;
        return temp;
    }
};
int main()
{
    complex c,d,e;

        c.getdata();
        d.getdata();
        cout<<"\n\nResult of first input:";c.result();
        cout<<"\n\nResult of Second Input :";d.result();
    try
    {
        e=c/d;
        cout<<"\n\nResut is After c1/c2 :";e.show(c,d);
    }
    catch(int c)
    {
        cout<<"\nError";
    }
}
