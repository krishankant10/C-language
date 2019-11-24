#include<iostream>
#include <conio.h>

using namespace std;
int main()
{

    int n;
    string str[10],str1,str2[10];

    int j=0;
    cout<<"How many City Name want to Enter:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        str1=str[i];
        if(str1[0]=='b'||str1[0]=='B'||str1[0]=='c'||str1[0]=='C')
        {
            str2[j]=str[i];
            j++;
        }
    }
    cout<<"String Of strted For 'B' Or 'C'\n";
    for(int k=0;k<=j;k++)
    {
        cout<<str2[k]<<"\n";
    }

}
