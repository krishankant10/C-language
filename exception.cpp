#include <iostream>
#include <conio.h>
#include<stdlib.h>
using namespace std;
class cal
{
    double a,b;
public:
    void read(double m,double n)
    {
        a=m;
        b=n;
    }
    inline double divide()
    {
        return a/b;
    }

};
int main()
{
    double a,b;
    cal c;
    cout<<"Enter First Number:\n";
    cin>>a;
    try
    {
        if(cin.fail())
            throw (a);
        cout<<"Enter Second Number:\n";
        cin>>b;
            if(cin.fail())
                throw (b);
            if(b==0)
            {
                int kl;
                throw (kl);
            }
    }
    catch(double p)
    {
        cout<<"Incomplete Data type for value"<<p;
        exit (1);
    }
    catch(int l)
    {
        cout<<"Error:";
        exit(1);
    }

    c.read(a,b);
    cout<<"\n\nDivision is :"<<c.divide();
}
