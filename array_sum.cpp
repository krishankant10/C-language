#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class array
{
 public:
    float *a;
    int i,p;
    array(){}
    array(float *b,int n)
    {
    p=n;
        *a=*b;
    }
    void display()
    {
        for(i=0;i<p;i++)
        {
            cout<<"\nThe array ["<<i+1<<"]elements are        :";
            cout<<"\t"<<a[i];
        }
    }
    float* sum(float x[],float y[])
    {
        float *z;

        for(i=0;i<p;i++)
        {
            z[i]=x[i]+y[i];
           cout<<"\t"<<z[i];
        }
        return z;

    }

    /*array operator+(array x)
    {
        array t;
        for(i=0;i<p;i++)
        {
            t.a[i]=a[i]+x.a[i];
        }
        return t;
    }*/
};
int main()
{
    array c;
    array w;
    int n,i;
    float m[100],o[100];
    cout<<"How many element want to need:";
    cin>>n;
    cout<<"Enter 1st array elements :";
    for(i=0;i<n;i++)
    {
        cin>>m[i];
    }
    cout<<"Enter 2nd array elements :";
    for(i=0;i<n;i++)
    {
        cin>>o[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<w.sum(m,o);
    }
    w.sum(m,o);
    //array a(m,n);
    //array b(o,n);
    //c=a+b;
    //a.display();
    //b.display();
    //w.display();
    //c.display();
}
