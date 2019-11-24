#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("12345");
    string s2("abcde");

    cout<<"Original strings are :\n";
    cout<<"S1:"<<s1<<"\n";
    cout<<"S2:"<<s2<<"\n\n";

    cout<<"Place s2 inside s1\n";
    s1.insert(4,s2);
    cout<<"Modified S1:"<<s1<<"\n\n";

    cout<<"Remove 5 Characters frpm S1\n";
    s1.erase(4,5);
    cout<<"Now S1:"<<s2<<"\n\n";

    cout<<"Replace Middile 3 Characters in S2 with S1\n";
    s2.replace(1,3,s1);
    cout<<"Now S1 is :"<<s2<<"\n";
    return 0;
}
