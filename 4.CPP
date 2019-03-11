#include<iostream>
using namespace std;
int highest(int a[],int n)
{
    int h=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>h)
            h=a[i];
    }
    return h;
}
int main()
{
    int i,a[10],n;
    cout<<"How many Eement in array:";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"\nhighest is :"<<highest(a,n);
}
