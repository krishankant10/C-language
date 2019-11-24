#include<iostream>
#include <conio.h>
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
        v=new T[size];
    }
    ~vector()
    {
        delete v;
    }
    T& elem (int i)
    {
        if(i>=size)
            cout<<endl<<"Error:out of Range";
        return v[i];
    }
    void show();
};
template <class T>
void vector<T>::show()
{
    for(int i=0;i<size;i++)
        cout<<elem(i)<<" ,";
}
int main()
{
   int i;
   vector<int> int_vect(5);
   vector <float> float_vect(4);
   for(i=0;i<5;i++)
        int_vect.elem(i)=i+1;
   for(i=0;i<4;i++)
    float_vect.elem(i)=float(i+2.4);
   cout<<"integer vector:";
   int_vect.show();
   cout<<"\n\nfloating vector is";
   float_vect.show();
}
