#include <iostream>
#include <conio.h>
using namespace std;
struct A
{
    int x;
    int y;
};
struct B
{
    int a;
    double b;
};
template<class T>
void assign_A(T a,T b,A & S1)
{
    S1.x=a;
    S1.y=b;
}
template<class T>
void assign_B(T a,T b,B &S2)
{
    S2.a=a;
    S2.b=b;
}
int main()
{

    A S1;
    B S2;
    assign_A(3,4,S1);
    assign_B(3.0,3.6,S2);
}
