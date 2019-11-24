#include<iostream>
#include<conio.h>
#include<map>
#include<string>
using namespace std;
typedef map<string,int>student;

int main()
{
    string name;
    int rno;
    student stu;
    cout<<"Enter How many student Data:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Name:";
        cin>>name;
        cout<<"Roll no. :";
        cin>>rno;
        stu[name]=rno;
    }
    stu["Krishankant"]=1;
    student::iterator p;
    for(p=stu.begin();p!=stu.end();p++)
    {
        cout<<(*p).first<<" "<<(*p).second<<"\n";
    }
    cout<<"\n\n";
    cout<<"Enter name:";
    cin>>name;
    rno=stu[name];
    cout<<"Number:"<<rno<<"\n";
    return 0;

}
