#include <iostream.h>
#include <conio.h>
#include <string.h>
class media
{
    protected:
	char title[50];
	float price;
    public:
	media(char *s,float a)
	{
		strcpy(title,s);
		price=a;
	}
	virtual void display(){}
};
class book:public media
{
	int pages;
   public:
	book(char *s,float a,int p):media(s,a)
	{
		pages=p;
	}
	void display()
	{
		cout<<"\n Title:"<<title;
		cout<<"\n Pages is :"<<pages;
		cout<<"\n Price is :"<<price;
	}
};
class tape: public media
{
	float time;
   public:
	tape(char *s,float a,float t):media(s,a)
	{
		time=t;
	}
	void display()
	{
		cout<<"\n title is:"<<title;
		cout<<"\n Play Time :"<<time;
		cout<<"\n Price is :"<<price;
	}
};
void main()
{
	clrscr();
	char *title=new char[30];
	float price,time;
	int pages;
	//book Details
	cout<<"\n Enter Book details\n\n";
	cout<<" Title:";cin>>title;
	cout<<" Price:";cin>>price;
	cout<<" Pages:";cin>>pages;
	book book1(title,price,pages);

	//tap details
	cout<<"\n Enter Tap details\n\n";
	cout<<" Title:";cin>>title;
	cout<<" Price:";cin>>price;
	cout<<" Play Time(mins):";cin>>time;
	tap tap1(title,price,time);

	media *list[2];
	list[0]=&book1;
	list[1]=&tape1;

	cout<<"\n MEDIA DETAILS";

	cout<<"\n.........BOOK..........";
	list[0]->display();
	cout<<"\n.........TAP...........";
	list[1]->display();
	getch();
}

