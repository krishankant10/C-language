#include<iostream>
using namespace std;
void prime(int a)
{
    int p=0;
    for(int i=2 ;i<a;i++)
        if(a%i==0)
        p++;
    if(p==0)
        cout<<"Given no. is prime";
    else
        cout<<"Given no is not prime";
}
int main()
{
    int a;
    cout<<"Enter Any value :";
    cin>>a;
    prime(a);
}

