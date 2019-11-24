#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter value of a and b";
    cin>>a>>b;
    int x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<"Result (a/x)="<<a/x<<"\n";
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<"Exception caught:DIVIDE BY ZERO\n";
    }
    cout<<"END";
    return 0;
}
