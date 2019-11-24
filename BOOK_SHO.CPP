#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
class books
{
	char *author,*title,*publisher;
	float price;
	int stock;
	public:
		void book(char *authorin,char *titlein,char *publ,float amt,int stocks)
		{
			author=new char[strlen(authorin)+1];
			strcpy(author,authorin);
			title=new char[strlen(titlein)+1];
			strcpy(title,titlein);
			publisher=new char[strlen(publ)+1];
			strcpy(publisher,publ);
			price=amt;
			stock=stocks;
		}

		~books()
		{
			delete author;
			delete title;
			delete publisher;
		}
		char *getauthor()
		{
			return author;
		}
		char *gettitle()
		{
			return title;
		}
		void display()
		{
			cout<<"\nAuthor name is :"<<author<<endl;
			cout<<"Title is         :"<<title<<endl;
			cout<<"Publisher is     :"<<publisher<<endl;
			cout<<"Book Price is    :"<<price<<endl;
			cout<<"Total Quantity Of book is :"<<stock<<endl;
		}
};
void main()
{
	books b[100];
	clrscr();
	int i,n,stock;
	char author[100],title[100],publisher[100];
	float amt;
	cout<<"How many books Types are available:";
	cin>>n;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Enter books author:";
		cin>>author;
		cout<<"\n Enter book Title:";
		cin>>title;
		cout<<"\n enter book publisher:";
		cin>>publisher;
		cout<<"\nEnter book amount:";
		cin>>amt;
		cout<<"\nEnter how many books are availabke in stock:";
		cin>>stock;
		b[i].book(author,title,publisher,amt,stock);
	}
	clrscr();
	cout<<"\nYou need to sale book 1 for yes 2 for no:";
	int p;
	cin>>p;
	if(p==1)
	{
		clrscr();
		cout<<"\nEnter book Author name:";
		cin>>author;
		cout<<"\nEnter Book Title :";
		cin>>title;
		int m,n;
		for(i=0;i<n;i++)
		{
			m=strcmp(author,b[i].getauthor());
			n=strcmp(title,b[i].gettitle());
			if(m==0&&n==0)
			{
				cout<<"\nfound";
				b[i].display();
				break;
			}
		}

	}
	else
	exit(4);
getch();
}












