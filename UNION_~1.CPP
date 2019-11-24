#include<iostream.h>
#include <conio.h>
#include <string.h>
enum boolean{FALSE,TRUE};
const int max_item=25;
template<class T>
class bag
{
protected:
    T content[max_item];
    int itemcount;
public:
    bag()
    {
	itemcount=0;
    }
    void put(T item)
    {
	content[itemcount++]=item;
    }
    boolean isempty()
    {
	return itemcount==0?TRUE:FALSE;
    }
    boolean isfull()
    {
	return itemcount==max_item?TRUE:FALSE;
    }
    boolean isexist(T item);
    void show();
};
template<class T>
boolean bag<T>::isexist(T item)
{
    for(int i=0;i<itemcount;i++)
	if(content[i]==item)
	return TRUE;
    return FALSE;
}
template<class T>
void bag<T>::show()
{
    for(int i=0;i<itemcount;i++)
	cout<<content[i]<<" ";
    cout<<endl;
}
template<class S>
class set:public bag<S>
{
public:
    void add(S element)
    {
     if(!isexist(element)&& !isfull())
	    put(element);
    }
    void read();
    void operator = (set s1);
    friend set operator + (set s1,set s2);
};
template<class S>
void set<S>::read()
{
    S element;
    while(1)
    {
	cout<<"Enter set element<0-end>:";
	cin>>element;
	if(element==0)
	    break;
	add(element);
    }
}
template<class S>
void set<S>::operator = (set<S> s2)
{
    for(int i=0;i<s2.itemcount;i++)
	content[i]=s2.content[i];
    itemcount=s2.itemcount;
}
template<class S>
set<S> operator+ (set <S> s1,set <S> s2)
{
    set<S> temp;
    temp=s1;
    for(int i=0;i<s2.itemcount;i++)
    {
	if(!s1.isexist(s2.content[i]))
	    temp.add(s2.content[i]);
    }
    return(temp);
}
int main()
{
    set<int> s1;
    set <int> s2;
    set<int> s3;
    cout<<"Enter set1 element.... "<<endl;
    s1.read();
    cout<<"enter Set 2 Element...."<<endl;
    s2.read();
    s3=s1+s2;
    cout<<endl<<"union of s1 and s2 is ";
    s3.show();
    cout<<"\n\n\n";
    s2.show();
    cout<<"\n\n\n";
    s1.show();
    return 0;
}
