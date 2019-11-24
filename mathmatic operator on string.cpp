#include<string.h>
#include <conio.h>
#include<iostream>
using namespace std;
class string
{
    char *p;
    int len;
public:
    string()
    {
        len=0;
        p=0;
    }
    string(const char * s);
    string(const string & s);
    ~string()
    {
        delete p;
    }
    //+operator
    friend string operator + (const string &s,const string &t);
    //<=operator
    friend int operator<=(const string &s,const string &t);
    friend void show(const string s);
};
string :: string(const char *s)
{
    len=strlen(s);
    p=new char[len+1];
    strcpy(p,s);
}
string :: string (const string &s)
{
    len=s.len;
    p=new char [len+1];
    strcpy(p,s.p);
}
//overloading operator +
string operator +(const string &s,const string &t)
{
    string temp;
    temp.len=s.len+t.len;
    temp.p=new char[temp.len+1];
    strcpy(temp.p,s.p);
    strcat(temp.p,t.p);
    return(temp);
}
//overloading <= operator




