#include <iostream>
#include <conio.h>
using namespace std;
//enum boolean{false,true};
template <class T>
int recbinsearch(T Data[],T SrchElem,int low,int high)
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(SrchElem<Data[mid])
        return recbinsearch(Data,SrchElem,low,mid-1);
    else
        if(SrchElem>Data[mid])
            return recbinsearch(Data,SrchElem,mid+1,high);
        return mid;
}
int main()
{
    int elem,size,num[25],index;
    cout<<"Program to search integer elements...."<<endl;
    cout<<"How many Element ?";
    cin>>size;
    cout<<"Enter the Element in ascending order for binary search...."<<endl;
    for(int i=0;i<size;i++)
        cin>>num[i];
    cout<<"Enter the Element to be Searched:";
    cin>>elem;
    if((index=recbinsearch(num,elem,0,size))==-1)
        cout<<"Element "<<elem<<"not found"<<endl;
    else
        cout<<"Element "<<elem<<"found at position"<<index;
}


