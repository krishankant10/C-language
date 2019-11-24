#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
class vector
{
    T *v;
    int size;
public:
    vector(int vector_size)
    {
        size=vector_size;
        v=new T[vector_size];
    }
    ~vector()
    {
        delete v;
    }
    T & elem(int i)
    {
        if(i>=size)
            cout<endl<<"Error : out of range";
        return v[i];
    }
    void show();
};
template<class T>
void vector<T>::show()
{
    for(int i=0;i<size;i++)
        cout<<v[i]<<", ";
}
int main()
{
    int i;
    vector<int>int_vect(5);
    vector<float>float_vect(4);
    for(i=0;i<5;i++)
        int_vect.elem(i)=i+1;
    for(i=0;i<4;i++)
        float_vect.elem(i)=float(i+1.5);
    cout<<"Integer Vector is :";
    int_vect.show();
    cout<<endl<<"Floating Vector Is:";
    float_vect.show();

}
