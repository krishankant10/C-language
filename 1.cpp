#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,factn=1,factr=1,factnr=1;
    double c;
    cout<<"Enter Value of N : ";
    cin>>n;
    cout<<"Enter Value of R : ";
    cin>>r;
    for(int i=1;i<=n;i++)
    {
        factn=factn*i;
    }
    cout<<"\n N! = "<<factn;
    for(int i=1;i<=r;i++)
    {
        factr=factr*i;
    }
    cout<<"\n R! = "<<factr;
    for(int i=1;i<=(n-r);i++)
    {
        factnr=factnr*i;
    }
    cout<<"\n (N-R)! = "<<factnr;
    c=(factn)/(factr*factnr);
    cout<<"\n\n nCr = "<<c;
}
