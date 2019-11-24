#include<iostream>
#include<conio.h>
using namespace std;


int main()
{

    double j;
    try{
        cin>>j;
        if (cin.fail())
            throw (j);
        else
            cout << "Double Value " << j << endl;
    }
    catch(double a)
    {
        cout<<"Incompatible Datatype for value"<<a;
    }

}
