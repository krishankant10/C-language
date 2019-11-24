#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
class book
{
	int book_id,price,no_of_books;
	char title[100],author[100],pub[100];
	public:
		void getdata(int book,int cost,int total,char *titl,char *auth,char *publi)
		{
			book_id=book;
			price=cost;
			no_of_books=total;
			strcpy(title,titl);
			strcpy(author,auth);
			strcpy(pub,publi);
		}
		void print()
		{
			clrscr();
			cout<<"\n\n\nBook id is :"<<book_id;
			cout<<"\nTitle is:"<<title;
			cout<<"\n Book Author name is :"<<author;
			cout<<"\nbook Publisher is:"<<pub;
			cout<<"\n book price is :"<<price;
			cout<<"\n Total books is:"<<no_of_books;
			getch();
		}
		int getid()
		{
			return book_id;
		}

};
class member
{
	int mem_id;
	char n[100],co[10];
	public:
		void setdata(int mem,char *na,char *c)
		{
			mem_id=mem;
			strcpy(n,na);
			strcpy(co,c);
		}
		void show()
		{
			clrscr();
			cout<<"Member id is :"<<mem_id;
			cout<<"\nMember Name is :"<<n;
			cout<<"\nMember contact no is :"<<co;
			getch();
		}
		int id2()
		{
			return mem_id;
		}
};
int cnt1=0,cnt2=0;
void main()
{
	book z[10];
	member y[10];
	int mem_id,i,j,k;
	char n[100],co[10];
	int book_id,price,no_of_books;
	char title[100],author[100],pub[100];
	clrscr();
	while(1)
	{
	clrscr();
	gotoxy(30,4);
	cout<<"1.Add Book";
	gotoxy(30,6);
	cout<<"2.Show all Books";
	gotoxy(30,8);
	cout<<"3.Show Specific Book";
	gotoxy(30,10);
	cout<<"4.Add Member";
	gotoxy(30,12);
	cout<<"5.Issue Book";
	gotoxy(30,14);
	cout<<"6.Deposite Book";
	gotoxy(30,16);
	cout<<"7.Show Issued Books list ";
	gotoxy(30,18);
	cout<<"8.Show Members ";
	gotoxy(30,20);
	cout<<"9.Show speific member";
	gotoxy(30,22);
	cout<<"10.Sort all books List on the basis of book no.";
	gotoxy(30,24);
	cout<<"11.Exit";
	gotoxy(30,2);
	cout<<"Choose Any option:";
	cin>>j;
	switch(j)
	{
		case 1:
		       cout<<"Enter the book id:";
		       cin>>book_id;
		       cout<<"\nEnter The Title of book:";
		       cin>>title;
		       cout<<"\n Enter the book author name:";
		       cin>>author;
		       cout<<"\n Enter the name of publisher:";
		       cin>>pub;
		       cout<<"\n Enter the price of book in integer:";
		       cin>>price;
		       cout<<"\n enter the no. of copies :";
		       cin>>no_of_books;
		       z[cnt1].getdata(book_id,price,no_of_books,title,author,pub);
		       cnt1++;
		       break;
		case 2:
			for(i=0;i<cnt1;i++)
			{
				z[i].print();
			}
			break;
		case 3:
			clrscr();
			cout<<"Enter the Book id:";
			cin>>k;
			for(i=0;i<cnt1;i++)
			{
				if(z[i].getid()==k)
				z[i].print();
			}
			break;
		case 4:
			clrscr();
			cout<<"\nEnter the member ID :";
			cin>>mem_id;
			cout<<"\nEnter The Member name: ";
			cin>>n;
			cout<<"\nEnter the member Contact no.:";
			cin>>co;
			y[cnt2].setdata(mem_id,n,co);
			cnt2++;
			break;
		case 8:
		       for(i=0;i<cnt2;i++)
		       {
				y[i].show();
		       }
		       break;
		case 9:
			clrscr();
			cout<<"enter the Member id:";
			cin>>k;
			for(i=0;i<cnt2;i++)
			{
				if(y[i].id2()==k)
				y[i].show();
			}
			break;
		case 11:
			exit(0);
		}//switch ends
	}//while loop end
	getch();
}