#include <iostream>
#include<conio.h>
using namespace std;
struct student
{
    char name[30];
    int age;
    char collegecode;
};
template<class T>
void display(T &t)
{
    cout<<t<<endl;
}
ostream & operator <<(ostream &out,student &s)
{
    out<<"Name:"<<s.name<<endl;
    out<<"Age:"<<s.age<<endl;
    out<<"College Code:"<<s.collegecode<<endl;
    return out;
}
int main()
{
    student s1;
    cout<<"Enter Student Deatails.....:";
    cout<<"\nName :";cin>>s1.name;
    cout<<"Age :";cin>>s1.age;
    cout<<"College Code :";cin>>s1.collegecode;
    cout<<"THE STUDENT RECORD..."<<endl;
    cout<<"\nName:";display(s1.name);
    cout<<"\nAge :";display(s1.age);
    cout<<"\nCollege Code :";display(s1.collegecode);
    cout<<"\n\n THe Student Record is....";
    display(s1);
    cout<<"mohan";
}
