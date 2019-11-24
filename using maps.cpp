#include<iostream>
#include<conio.h>
#include<map>
#include<string>
using namespace std;
typedef map<string,int> phonemap;

int main()
{
    string name;
    int number;
    phonemap phone;
    cout<<"Enter three sets of name and number\n";
    for(int i=0;i<3;i++)
    {
        cin>>name;
        cin>>number;
        phone[name]=number;
    }
    phone["jacob"]=4444;
    phone.insert(pair<string,int>("Boss",5555));
    int n=phone.size();
    cout<<"\n Size of map: "<<n<<"\n\n";
    cout<<"list of telephone number\n";
    phonemap::iterator p;
    for(p=phone.begin();p!=phone.end();p++)
    {
        cout<<(*p).first<<" "<<(*p).second<<"\n";
    }
    cout<<"\n\n";
    cout<<"Enter name:";
    cin>>name;
    number=phone[name];
    cout<<"Number:"<<number<<"\n";
    return 0;
}
