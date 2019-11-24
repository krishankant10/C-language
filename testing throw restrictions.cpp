#include<iostream>
#include<conio.h>
using namespace std;
void test(int x) throw(int,double,char)
{
    if(x==0) throw 'x';
    else
        if(x==1) throw x;
    else
        if(x==-1) throw 1.0;
        cout<<"End of function Block\n\n";
}
int main()
{
    try
    {
        cout<<"Testing Throw restriction\n";
        cout<<"x==0\n";
        test(0);
        cout<<"x==1\n";
        test(1);
        cout<<"x==-1\n";
        test(-1);
        cout<<"x==2\n";
        test(2);
    }
    catch(char c)
    {
        cout<<"\ncaught a character\n";
    }
    catch(int m)
    {
        cout<<"\nCaught an integer\n";
    }
    catch(double d)
    {
        cout<<"Caught a double\n";
    }
    cout<<"\nEnd of try-catch system\n\n";
    return 0;
}
