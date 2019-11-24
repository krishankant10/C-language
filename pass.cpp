#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
const int arr_size=10;
class array
{
private:
    int arr[arr_size];
public:
    array();
    class range{};
    int & operator [](int i)
    {
        if(i<0||i>=arr_size)
            throw range();
        return arr[i];
    }
};
array::array()
{
    for(int i=0;i<arr_size;i++)
        arr[i]=i;
}
int read(array & a,int index)
{
    int element;
    try
    {
        element=a[index];
    }
    catch (array::range)
    {
        cout<<endl<<"parent passing Exception to child to handle"<<endl;
        throw;
    }
    return element;
}
