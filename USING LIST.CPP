#include<iostream>
#include<conio.h>
#include<list>
#include<cstdlib>
using namespace std;
void display(list <int> &lst)
{
    list<int>::iterator p;
    for(p=lst.begin();p!=lst.end();++p)
        cout<<*p<<", ";
    cout<<"\n\n\n";
}
int main()
{
    list<int> list1;
    list<int> list2(5);
    for(int i=0;i<3;i++)
        list1.push_back(rand()/100);
    list<int> ::iterator p;
    for(p=list2.begin();p!=list2.end();++p)
        *p=rand()/1000;
    cout<<"List1\n";
    display(list1);
    cout<<"List2 \n";
    display(list2);

    //add two element end of the list
    list1.push_front(100);
    list1.push_back(200);

    //remove an element at the front of list 2
    list2.pop_front();

    cout<<"Now list1\n";
    display(list1);
    cout<<"Now list2\n";
    display(list2);

    list<int> lista,listb;
    lista=list1;
    listb=list2;

    //merging two lists(unsorted)
    list1.merge(list2);
    cout<<"merged unsorted list is\n";
    display(list1);

    //sorting and merging
    lista.sort();
    listb.sort();
    lista.merge(listb);
    cout<<"Merged Sorted List\n";
    display(lista);

    //reversing a list
    lista.reverse();
    cout<<"Reversed Merged list \n";
    display(lista);
    return(0);

}
