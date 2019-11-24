#include <iostream>
#include <conio.h>
using namespace std;
enum boolean
{
	FALSE,TRUE
};
const int max_items=25;
class bag
{
     protected:
	int contents[max_items];
	int itemcount;
     public:
	bag()
	{
		itemcount=0;
	}
	void put(int item)
	{
		contents[itemcount++]=item;
	}
	boolean isempty()
	{
		return itemcount==0?TRUE:FALSE;
	}
	boolean isfull()
	{
		return itemcount==max_items?TRUE:FALSE;
	}
	boolean isexist(int item)
	{
		for(int i=0;i<itemcount;i++)
		if(contents[i]==item)
		return TRUE;
		return FALSE;
	}
	void show()
	{
		for(int i=0;i<itemcount;i++)
		cout<<contents[i]<<" ";
		cout<<endl;

     }
};
class set:public bag
{
	public:
		void add(int element)
		{
			if(!isexist(element)&&!isfull())
			   put(element);
		}
		void read();
		void operator=(set s1);
		friend set operator + (set s1,set s2);
};
void set::read()
{
	int element;
	while(TRUE)
	{
		cout<<"Enter Set Element<0-end>: ";
		cin>>element;
		if(element==0)
			break;
		add(element);
	}
	cout<<"All Done!";
	getch();
}
void set :: operator = (set s2)
{
	for(int i=0;i<s2.itemcount;i++)
		contents[i]=s2.contents[i];
	itemcount=s2.itemcount;
}
set operator +(set s1,set s2)
{
	set temp;
	temp=s1;
	for(int i=0;i<s2.itemcount;i++)
	{
		if(!s1.isexist(s2.contents[i]))
		temp.add(s2.contents[i]);
	}
	return temp;
}
int main()
{
//	clrscr();
	set s1,s2,s3;
	cout<<"Enter Set 1 Element.."<<endl;
	s1.read();
	cout<<"enter set 2 Element.."<<endl;
	s2.read();
	s3=s1+s2;
	cout<<endl<<"Union of s1 and s2:";
	s3.show();
	getch();
}



