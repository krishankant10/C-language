#include <iostream.h>
#include <conio.h>
#include <string.h>
template <class T>
class book
{
	char title[20],publication[20];
	T pages;
    public:
	virtual void read(char *t,char *p,T page)
	{
		strcpy(title,t);
		strcpy(publication,p);
		pages=page;
	}
	virtual void show()
	{
		cout<<"\nBook Title is :"<<title;
		cout<<"\nPublication:"<<publication;
		cout<<"\nPages is :"<<pages;
	}
};
template <class T1>
class tape
{
	char titl[20],publi[20];
	T1 time;
    public:
	void read(char *t,char *p,T1 tim)
	{
		strcpy(titl,t);
		strcpy(publi,p);
		time=tim;
	}
	void show()
	{
		cout<<"\nTape Title is :"<<titl;
		cout<<"\nPublication:"<<publi;
		cout<<"\nTime is :"<<time;
	}
};
void main()
{
	clrscr();
	book <float>*fp;
	book <float>b;
	tape <float>*ft;
	tape <float>t;
	fp=&b;
	fp->read("C++","Unique",20);
	fp->show();
	ft=&t;
	cout<<endl<<endl;
	ft->read("Hindi","Shree",20.9);
	ft->show();
	getch();
}
