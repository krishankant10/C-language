#include <iostream>
#include <conio.h>
 using namespace std;
 const int arr_size=10;
 class array
 {
 private:
    int arr[arr_size];
 public:
    class range{};
    int & operator [](int i)
    {
        if(i<0||i>=arr_size)
            throw range();
        else
            return arr[i];
    }
 };
 int main()
 {
     array a;
     cout<<"Max array size allowed="<<arr_size<<endl;
     try
     {
        cout<<"Trying To refer a[1]....";
        a[1]=10;
        cout<<"\n\nSucceeded\n";
        cout<<"Trying To refer a[15]....";
        a[15]=10;
        cout<<"\nSucceeded\n";
     }
     catch(array::range)
     {
         cout<<"Out of rangein array reference";
     }
 }
