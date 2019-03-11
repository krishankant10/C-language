#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    for(int j=0;j<n;j++)
    for(int i=0;i<n;i++)
    {
        if(a[i+1]<a[i])
        {
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    cout<<"Sorting array is:";
    for(int i=0;i<n;i++)
        cout<<"\t"<<a[i];
}
int main()
{
    int a[100],i,n;
    cout<<"Enter how many element in array : ";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,n);
}
