#include<iostream>
#include <conio.h>
using namespace std;
template<class T>
T print(T data)
{
    return data;
}
template<class T>
void print(T data,int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<data<<endl;
    }
}
int main()
{
    cout<<print(1)<<endl;
    cout<<print(2.8)<<endl;
    print(500,4);
    print("oop is great",7);
}
