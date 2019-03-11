#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int i,j;
    //repeating loop 7 (number of elements in the array) times
    cout<<"Enter 5 values";
    for(i=0;i<5;i++)
    cin>>a[i];
    for(j = 0; j<5; j++)
    {
        //initially swapped is false
        int swapped = 0;
        i = 0;
        while(i<5-1)
        {
            //comparing the adjacent elements
            if (a[i] > a[i+1])
            {
                //swapping
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                //Changing the value of swapped
                swapped = 1;
            }
            i++;
        }
        //if swapped is false then the array is sorted
        //we can stop the loop
        if (swapped==0)
            break;
    }
    cout<<"Sorting :";
    for(i=0;i<5;i++)
        cout<<"\t"<<a[i];

    return 0;
}
