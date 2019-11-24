#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    vector<int> v;
    cout<<"Initialize Size ="<<v.size()<<"\n";
    int  x;
    cout<<"Enter Five Integer value:";
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<"Size After Adding Five values:";
    cout<<v.size()<<"\n";


    //Display The Contents
    cout<<"Current  contents:\n";
    display(v);

    return(0);
}
