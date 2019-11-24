#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class concat
{
    char *a,*b,*p;
public:
    concat(){}
    concat(char *x,char *y)
    {
        strcpy(a,x);
        strcpy(b,y);
    }
    char *operator+()
    {
        char c[100];
        strcpy(c,a);
        strcat(c,b);
        return c;
    }
    void display(void)
    {
        cout<<"krishankant";
    }
};
int main()
{
    concat a;
    char m[100],n[100],o[100];
    cout<<"Enter First Name:";
    cin>>m;
    cout<<"\nEnter Second Name:";
    cin>>n;
    concat(m,n);
    o=m+n;
    a.display();
    return 0;
}
