#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <fstream.h>
#include <iomanip.h>
#include <string.h>
class MEMBER
{
	int member_id;
	char name[30],contact[20];
public:
	void getdata(int i)
	{
		member_id=i;
		cout<<"Enter Member Name:";cin>>name;
		cout<<"ENter Member Contact No.: ";cin>>contact;
	}
	void putdata()
	{
		cout<<setw(10)<<member_id;
		cout.setf(ios::left,ios::adjustfield);
		cout<<"\t\t";
		cout<<setw(20)<<name;
		cout<<setw(20)<<contact;
		cout.setf(ios::right,ios::adjustfield);
		cout<<endl;
	}
};
class LIBRARY
{
	int book_no,no_of_copies;
	char title[20],author[20],publisher[20];
public:
	void getdata(int i)
	{
		book_no=i;
		cout<<"Enter Book Title: ";cin>>title;
		cout<<"Enter Author Name: ";cin>>author;
		cout<<"Enter Publisher Name: ";cin>>publisher;
		cout<<"Enter No. Of Copies Available: ";cin>>no_of_copies;
	}
	void putdata()
	{
		cout<<setw(5)<<book_no
		    <<setw(15)<<title
		    <<setw(16)<<author
		    <<setw(15)<<publisher
		    <<setw(20)<<no_of_copies<<endl;
	}
};
class logged
{
	char password[20],user_id[20];
   public:
	   char *getuser()
	{
		strcpy(user_id,"sant");
		return user_id;
	}
	char *getpassword()
	{
		strcpy(password,"unique");
		return password;
	}
};
void main()
{
	clrscr();
	int count=3,counter=0;
kk:
	char user[20],password[7]="\0";
	LIBRARY book;
	MEMBER member;
	logged uname;
	fstream file;
	gotoxy(30,11);
	cout<<"User_id: ";
	cin>>user;
	gotoxy(30,15);
	cout<<"Password:";
	for(int i=0;i<6;i++)
	{
		password[i]=getch();
		cout<<"*";
	}
	getch();
	int p=strcmp(password,uname.getpassword());
	int u=strcmp(user,uname.getuser());
if(p==0&&u==0)
{
	clrscr();
	gotoxy(20,4);
	cout<<"MR. YOU HAVE SUCCESSFULLY LOGGED IN";
	getch();
	clrscr();
chaman:
while(1)
{
	clrscr();
	gotoxy(30,9);
	cout<<"1.Add Book In Library";
	gotoxy(30,10);
	cout<<"2.Show All Book";
	gotoxy(30,11);
	cout<<"3.Count All Book";
	gotoxy(30,12);
	cout<<"4.Update Book";
	gotoxy(30,14);
	cout<<"5.Add Member";
	gotoxy(30,15);
	cout<<"6.Show All Member";
	gotoxy(30,16);
	cout<<"7.Count All member";
	gotoxy(30,17);
	cout<<"8.Show specific Member";
	gotoxy(30,19);
	cout<<"9.EXIT";
	gotoxy(30,7);
	cout<<"Choose any option: ";
	int option;
	cin>>option;
	if(option==1)
	{
		//Add one more book
		clrscr();
		file.open("library.txt",ios::app|ios::out);
		cout<<"\n\n.........Add Book.......\n\n";
		file.seekg(0,ios::end);
		int n=file.tellg();
		counter=n/sizeof(book);
		counter++;
		book.getdata(counter);
		getch();
		file.seekp(0,ios::end);
		file.write((char *)&book,sizeof(book));
		cout<<"BOOKS IN APENDED FILE \n";
		cout<<"CURRENT BOOKS IN LIBRARY "<<"\n";
		file.seekg(0,ios::end);
		int last=file.tellg();
		int m=last/sizeof(book);
		cout<<"\nNumber of object="<<m<<"\n";
		cout<<"\nTotal bytes in the file="<<last<<"\n";
		getch();
		file.close();

	}
	else
	if(option==2)
	{
		//show all book
		file.open("library.txt",ios::app|ios::in);
		clrscr();
		cout<<"CURRENT BOOKS IN LIBRARY "<<"\n";
		file.seekp(0,ios::beg);
		cout<<"-------------------------------------------------------------------------\n";
		cout<<setw(5)<<"BOOK_NO."
		    <<setw(13)<<"TITLE"
		    <<setw(16)<<"AUTHOR"
		    <<setw(15)<<"PUBLISHER"
		    <<setw(20)<<"NO.OF COPIES"<<endl;
		cout<<"-------------------------------------------------------------------------\n";
		cout<<"-------------------------------------------------------------------------\n";
		while(file.read((char *)&book,sizeof(book)))
		{
			book.putdata();
		}
		cout<<"-------------------------------------------------------------------------\n";
		getch();
		file.close();
	}
	else
	if(option==3)
	{
			/*>>>>>>>>>>>>>>>>n items */
		file.open("library.txt",ios::app|ios::in);
		clrscr();
		file.seekg(0,ios::end);
		int n=file.tellg();
		int location=n/sizeof(book);
		gotoxy(15,12);
		cout<<"Total Types of book in library:"<<location;
		getch();
		file.close();
	}
	else
	if(option==4)
	{
	       /*	//show specic book
		clrscr();
		gotoxy(15,12);
		cout<<"Enter Book no. To Be update:";
		int obj;
		cin>>obj;
		char ch;
		cin.get(ch);
		file.open("library.txt",ios::ate|ios::in|ios::out);
		file.seekg(0);
		clrscr();
		int location=(obj-1)*sizeof(book);
		cout<<location<<endl<<endl;
		if(file.eof())
		file.clear();

		file.seekp(location);
		cout<<"........Enter new data Of book........\n\n";
		book.getdata(obj);
		cin.get(ch);
		file.write((char *)& book,sizeof book)<<flush;
		file.close(); */
		clrscr();
		gotoxy(19,12);
		cout<<"This Is not available:";
		getch();
	}
	else
	if(option==5)
	{
		//add member
		clrscr();
		file.open("member.txt",ios::app|ios::out);
		cout<<"\n\n.........Add Member.......\n\n";
		file.seekg(0,ios::end);
		int n=file.tellg();
		counter=n/sizeof(member);
		counter++;
		member.getdata(counter);
		getch();
		file.seekp(0,ios::end);
		file.write((char *)&member,sizeof(member));
		cout<<"MEMBERS IN APENDED FILE \n";
		cout<<"CURRENT MEMBER IN LIBRARY "<<"\n";
		file.seekg(0,ios::end);
		int last=file.tellg();
		int m=last/sizeof(member);
		cout<<"\nNumber of object="<<m<<"\n";
		cout<<"\nTotal bytes in the file="<<last<<"\n";
		getch();
		file.close();

	}
	else
	if(option==6)
	{
		//show all member
		file.open("member.txt",ios::app|ios::in);
		clrscr();
		cout<<"CURRENT MEMBERS IN LIBRARY "<<"\n";
		file.seekp(0,ios::beg);
		cout<<"-------------------------------------------------------------------------\n";
		cout<<setw(12)<<"ID_NO."
		    <<setw(17)<<"NAME"
		    <<setw(23)<<"CONTACT"<<endl;
		cout<<"-------------------------------------------------------------------------\n";
		cout<<"-------------------------------------------------------------------------\n";
		while(file.read((char *)&member,sizeof(member)))
		{
			member.putdata();
		}
		cout<<"-------------------------------------------------------------------------\n";
		getch();
		file.close();
	}
	else
	if(option==7)
	{
		/*>>>>>>>>>>>>>>>>n items */
		file.open("member.txt",ios::app|ios::in);
		clrscr();
		file.seekg(0,ios::end);
		int n=file.tellg();
		int location=n/sizeof(member);
		gotoxy(15,12);
		cout<<"Total Member in library:"<<location;
		getch();
		file.close();
	}
	else
	if(option==8)
	{
		clrscr();
		gotoxy(19,12);
		cout<<"This Is not available:";
		getch();
	}
	else
	if(option==9)
	{
		file.close();
		clrscr();
		gotoxy(30,5);
		cout<<"....You are Exit.....";
		gotoxy(30,7);
		cout<<"1. Yes";
		gotoxy(30,9);
		cout<<"2. No";
		gotoxy(30,11);
		int opt;
		cout<<"Choose Any option: ";
		cin>>opt;
		if(opt==2)
		{
			goto chaman;
		}
		else
		exit(2);
	}

}

}
else
{
	clrscr();
	cout<<count<<":Attemped Left\n";
	getch();
	clrscr();
	if(count==0)
	{
		gotoxy(15,12);
		cout<<"You have tried many times Your Account is blocked";
		getch();
		exit(1);
	}
	else
	{
		count--;
		goto kk;
	}
}
}


