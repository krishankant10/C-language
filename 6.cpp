#include<iostream>
using namespace std;
int main()

{
 char ch,r,c,t;
 cout<<"Enter any character : ";
 cin>>ch;
 if(ch>='a' && ch<='z')
    ch = ch - 32;
 for(r='A'; r<=ch; r++)
 {
  for(c=r; c<=ch; c++)
    cout<<c;
  for(t='A'; t<r; t++)
     cout<<t;
  cout<<endl;
 }
 return 0;
}
