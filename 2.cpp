#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[100],n,search,p=1;
    cout<<"Hoe many Element in array :";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Search number : ";
    cin>>search;
    for(int i=0;i<n;i++)
    {
        if(a[i]==search)
        {
            cout<<"Element search in position no "<<i+1<<endl;
            p=0;
        }
    }
    if(p==1)
        cout<<"Element not in this array\n\n";
}
