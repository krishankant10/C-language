#include <iostream.h>
#include <conio.h>
#include <stdio.h>
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
		cout<<"Enter Member Name:";gets(name);
		cout<<"Enter Member Contact No.: ";cin>>contact;
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
	int getmemberid()
	{
		return member_id;
	}
	void setmemberid(int mem)
	{
		member_id=mem;
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
		cout<<"Enter Book Title: ";gets(title);
		cout<<"Enter Author Name: ";gets(author);
		cout<<"Enter Publisher Name: ";gets(publisher);
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
	int getbookno()
	{
		return book_no;
	}
	void setbookno(int n)
	{
		book_no=n;
	}
	int getcopies()
	{
		return no_of_copies;
	}
	void setcopies(int p)
	{
		no_of_copies=p;
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
	cout<<"MR. SANT YOU HAVE SUCCESSFULLY LOGGED IN";
	getch();
	clrscr();
chaman:
while(1)
{
	clrscr();
	gotoxy(30,4);
	cout<<"1.Add Book In Library";
	gotoxy(30,5);
	cout<<"2.Show All Book";
	gotoxy(30,6);
	cout<<"3.Count All Book";
	gotoxy(30,7);
	cout<<"4.Update Book";
	gotoxy(30,8);
	cout<<"5.Delete Book";
	gotoxy(30,9);
	cout<<"6.Show Specific Book";
	gotoxy(30,11);
	cout<<"7.Issue Book";
	gotoxy(30,12);
	cout<<"8.Deposite Book";
	gotoxy(30,14);
	cout<<"9.Add Member";
	gotoxy(30,15);
	cout<<"10.Show All Member";
	gotoxy(30,16);
	cout<<"11.Count All member";
	gotoxy(30,17);
	cout<<"12.Show Specific Member";
	gotoxy(30,18);
	cout<<"13.Update Member";
	gotoxy(30,19);
	cout<<"14.Delete Member";
	gotoxy(30,21);
	cout<<"15.EXIT";
	gotoxy(30,2);
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
		file.seekp(0,ios::end);
		file.write((char *)&book,sizeof(book));
		cout<<"BOOKS IN APENDED FILE \n";
		cout<<"CURRENT BOOKS IN LIBRARY "<<"\n";
		file.seekg(0,ios::end);
		int last=file.tellg();
		int m=last/sizeof(book);
		cout<<"\nNumber of object="<<m<<"\n";
		cout<<"\nTotal bytes in the file="<<last<<"\n";
		cout<<"\n\nPress......";
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
		gotoxy(30,0);
		cout<<"\n\nPress......";
		getch();
		file.close();
	}
	else
	if(option==3)
	{
			/*Count All Types of Book*/
		file.open("library.txt",ios::app|ios::in);
		clrscr();
		file.seekg(0,ios::end);
		int n=file.tellg();
		int location=n/sizeof(book);
		gotoxy(15,12);
		cout<<"Total Types of book in library:"<<location;
		cout<<"\n\nPress......";
		getch();
		file.close();
	}
	else
	if(option==4)
	{                //update book
		clrscr();
		gotoxy(15,12);
		cout<<"Enter Book no. To Be update:";
		int obj;
		cin>>obj;
		file.open("library.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		clrscr();
		while(file.read((char*)&book,sizeof(book)))
		{
			if(book.getbookno()==obj)
			{
				cout<<"Book  no is "<<book.getbookno()<<endl;
				cout<<"Book Details are\n";
				book.putdata();
				cout<<"........Enter new data Of book........\n\n";
				book.getdata(obj);
				int pp=sizeof(book);
				cout<<"\n\npp is "<<pp<<endl<<endl;
				cout<<"\n\nPress......";
				getch();
				file.seekp(-pp,ios::cur);
				file.write((char *)& book,(sizeof book));
			}
		}
		cout<<"\n\nPress......";
		file.close();
	       /*	clrscr();
		gotoxy(19,12);
		cout<<"This Is not available:";
		getch();*/
	}
	else
	if(option==5)
	{
		//Delete book
		clrscr();
		cout<<"Enter Book No To be delete: ";
		int obj;
		cin>>obj;
		file.open("library.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		while(file.read((char*)&book,sizeof(book)))
		{
			if(book.getbookno()==obj)
			{
				cout<<"Book No. is "<<member.getmemberid()<<endl;
				cout<<"\n\n......BOOK Details are.....\n\n";
				book.putdata();
				cout<<"\n\nYou are confirm delete this BOOK\n";
				cout<<"\n1.yes\n\n2.No\nChoose any option:";
				int ab;
				cin>>ab;
				if(ab==2)
				{
					goto chaman;
				}
			}
		file.close();
		}
		file.open("library.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		clrscr();
		fstream file1;
		file1.open("temp.txt",ios::out|ios::binary);
		LIBRARY book1;
		while(file.read((char*)&book,sizeof(book)))
		{
			if(book.getbookno()!=obj)
			file1.write((char *)&book,sizeof(book));
		}
		file.close();
		file1.close();
		remove("library.txt");
		rename("temp.txt","library.txt");
		file.open("library.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		clrscr();
		int obj1=obj;
		obj++;
		while(file.read((char*)&book,sizeof(book)))
		{
			if(book.getbookno()==obj)
			{
				obj++;
				int pp=sizeof(book);
				file.seekp(-pp,ios::cur);
				file.write((char *)&obj1,sizeof(obj1));
				int sizeobj=pp-sizeof(obj1);
				file.seekp(sizeobj,ios::cur);
				obj1++;
			}
		}
		file.close();
		cout<<"You Have Successfully delete Book";
		getch();
		/*	if(book.getbookno()==obj)
			{
				fstream file1;
				cout<<"Book  no is "<<book.getbookno()<<endl;
				cout<<"\n\n......Book Details are.....\n\n";
				book.putdata();
				cout<<"\n\n 1.YES\n2.NO\n";
				cout<<"Choose Any one:";
				int p;cin>>p;
				if(p==2)
				{
					goto chaman;
				}
				else
				{
					int pp=sizeof(book);
					int len=file.tellg();
					file.seekp(-pp,ios::cur);
					int length=file.tellg();
					file1.open("temp.txt",ios::in|ios::out|ios::binary|ios::ate);
					file.seekp(0);
					file1.seekp(len,ios::cur);
					file1.read((char *)&book,sizeof(book));
					file.seekp(length);
					file.write((char *)&book,sizeof(book));
						//length=length+sizeof(book);
					file1.close();
				}
			}

		int set=book1.getbookno()-1;
		book.setbookno(set);
		file.write((char *)&book,sizeof(book));
		}

		file.close();     */
	}
	else
	if(option==6)
	{

		//Show Specific Book
		clrscr();
		gotoxy(15,12);
		cout<<"Enter Book no. To Be Show:";
		int obj;
		cin>>obj;
		file.open("library.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		clrscr();
		while(file.read((char*)&book,sizeof(book)))
		{
			if(book.getbookno()==obj)
			{
				cout<<"Book  no is "<<book.getbookno()<<endl;
				cout<<"Book Details are\n";
				cout<<"-------------------------------------------------------------------------\n";
				cout<<setw(5)<<"BOOK_NO."
				    <<setw(13)<<"TITLE"
				    <<setw(16)<<"AUTHOR"
				    <<setw(15)<<"PUBLISHER"
				    <<setw(20)<<"NO.OF COPIES"<<endl;
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"-------------------------------------------------------------------------\n";
				book.putdata();
			}
		}
		file.close();
		cout<<"Press.........";
		getch();

	}
	else
	if(option==7)
	{
		//Issue Book
		clrscr();
		cout<<"Enter Member Id : ";
		int obj;
		cin>>obj;
		file.open("member.txt",ios::in|ios::app|ios::out);
		file.seekg(0,ios::beg);
		while(file.read((char *)&member,sizeof(member)))
		{
			if(member.getmemberid()==obj)
			{
				cout<<"-------------------------------------------------------------------------\n";
				cout<<setw(12)<<"ID_NO."
				    <<setw(17)<<"NAME"
				    <<setw(23)<<"CONTACT"<<endl;
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"-------------------------------------------------------------------------\n";
				member.putdata();
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"\n\n1.Right\n2.Wrong\n\nChosse Any One: ";
				int j;
				cin>>j;
				if(j==2)
					goto chaman;
			}
		}
		file.close();
		clrscr();
		cout<<"Enter Book No To Be Issue: ";
		cin>>obj;
		file.open("library.txt",ios::in|ios::app|ios::out);
		file.seekg(0);
		while(file.read((char *)&book,sizeof(book)))
		{
			if(book.getbookno()==obj)
			{
				cout<<"Book Details are\n";
				cout<<"-------------------------------------------------------------------------\n";
				cout<<setw(5)<<"BOOK_NO."
				    <<setw(13)<<"TITLE"
				    <<setw(16)<<"AUTHOR"
				    <<setw(15)<<"PUBLISHER"
				    <<setw(20)<<"NO.OF COPIES"<<endl;
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"-------------------------------------------------------------------------\n";
				book.putdata();
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"\n\n1.Right\n2.Wrong\n\nChosse Any One: ";
				int j;cin>>j;
				if(j==2)
					goto chaman;

				int pos=file.tellp();
				cout<<"\n Before position is :"<<file.tellp();
				int pp=book.getcopies();
				int s=sizeof(s);
				file.seekp(-s,ios::cur);
				cout<<"\nAfter Position is "<<file.tellp();
				cout<<"\nBefore is "<<pp;
				pp--;
				cout<<"\nCurrent Book in Library: "<<pp;
				getch();
				file.write((char *)&pp,sizeof(pp));
				clrscr();
				cout<<"Book Issued Successfully";
				getch();
				file.seekp(pos);
			}
		}
		file.close();


	}
	else
	if(option==8)
	{
		//Deposite book
		clrscr();
		cout<<"Enter Member Id : ";
		int obj;
		cin>>obj;
		file.open("member.txt",ios::in|ios::app|ios::out);
		file.seekg(0,ios::beg);
		while(file.read((char *)&member,sizeof(member)))
		{
			if(member.getmemberid()==obj)
			{
				cout<<"-------------------------------------------------------------------------\n";
				cout<<setw(12)<<"ID_NO."
				    <<setw(17)<<"NAME"
				    <<setw(23)<<"CONTACT"<<endl;
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"-------------------------------------------------------------------------\n";
				member.putdata();
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"\n\n1.Right\n2.Wrong\n\nChosse Any One: ";
				int j;
				cin>>j;
				if(j==2)
					goto chaman;
			}
		}
		file.close();
		clrscr();
		cout<<"Enter Book No To Be Deposite: ";
		cin>>obj;
		file.open("library.txt",ios::in|ios::app|ios::out);
		file.seekg(0);
		while(file.read((char *)&book,sizeof(book)))
		{
			if(book.getbookno()==obj)
			{
				cout<<"Book Details are\n";
				cout<<"-------------------------------------------------------------------------\n";
				cout<<setw(5)<<"BOOK_NO."
				    <<setw(13)<<"TITLE"
				    <<setw(16)<<"AUTHOR"
				    <<setw(15)<<"PUBLISHER"
				    <<setw(20)<<"NO.OF COPIES"<<endl;
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"-------------------------------------------------------------------------\n";
				book.putdata();
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"\n\n1.Right\n2.Wrong\n\nChosse Any One: ";
				int j;cin>>j;
				if(j==2)
					goto chaman;

				int pos=file.tellp();
				cout<<"\n Before position is :"<<file.tellp();
				int pp=book.getcopies();
				int s=sizeof(s);
				file.seekp(-s,ios::cur);
				cout<<"\nAfter Position is "<<file.tellp();
				cout<<"\nBefore is "<<pp;
				pp++;
				cout<<"\nCurrent Book in Library: "<<pp;
				getch();
				file.write((char *)&pp,sizeof(pp));
				clrscr();
				cout<<"Book Issued Successfully";
				getch();
				file.seekp(pos);
			}
		}
		file.close();


	}
	else
	if(option==9)
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
		cout<<"\n\nPress......";
		file.close();

	}
	else
	if(option==10)
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
		cout<<"\n\nPress......";
		getch();
		file.close();
	}
	else
	if(option==11)
	{
		/*>>>>>>>>>>>>>>>>count all member */
		file.open("member.txt",ios::app|ios::in);
		clrscr();
		file.seekg(0,ios::end);
		int n=file.tellg();
		int location=n/sizeof(member);
		gotoxy(15,12);
		cout<<"Total Member in library:"<<location;
		cout<<"\n\nPress......";
		getch();
		file.close();
	}
	else
	if(option==12)
	{
		//show specific member
		clrscr();
		gotoxy(15,12);
		cout<<"Enter Member ID To Be Show:";
		int obj;
		cin>>obj;
		file.open("member.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		clrscr();
		while(file.read((char*)&member,sizeof(member)))
		{
			if(member.getmemberid()==obj)
			{
				cout<<"Member ID is "<<member.getmemberid()<<endl;
				cout<<"Member Details are\n";
				cout<<"-------------------------------------------------------------------------\n";
				cout<<setw(12)<<"ID_NO."
				    <<setw(17)<<"NAME"
				    <<setw(23)<<"CONTACT"<<endl;
				cout<<"-------------------------------------------------------------------------\n";
				cout<<"-------------------------------------------------------------------------\n";
				member.putdata();
				cout<<"-------------------------------------------------------------------------\n";
			}
		}
		file.close();
		cout<<"Press.........";
		getch();
	}
	else
	if(option==13)
	{
		//update member
		clrscr();
		gotoxy(15,12);
		cout<<"Enter Member id To Be update:";
		int obj;
		cin>>obj;
		file.open("member.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		clrscr();
		while(file.read((char*)&member,sizeof(member)))
		{
			if(member.getmemberid()==obj)
			{
				cout<<"Member id no is "<<member.getmemberid()<<endl;
				cout<<"Member old Details are\n";
				member.putdata();
				cout<<"........Enter new data Of book........\n\n";
				member.getdata(obj);
				int pp=sizeof(member);
				cout<<"\n\npp is "<<pp<<endl<<endl;
				cout<<"\n\nPress......";
				getch();
				file.seekp(-pp,ios::cur);
				file.write((char *)& member,(sizeof member));
			}
		}
		file.close();

	    /*	clrscr();
		gotoxy(19,12);
		cout<<"This Is not available:";
		getch(); */
	}
	else
	if(option==14)
	{
		//Delete member
		clrscr();
		cout<<"Enter Member ID To be delete: ";
		int obj;
		cin>>obj;
		file.open("member.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		while(file.read((char*)&member,sizeof(member)))
		{
			if(member.getmemberid()==obj)
			{
				cout<<"Member id is "<<member.getmemberid()<<endl;
				cout<<"\n\n......Member Details are.....\n\n";
				member.putdata();
				cout<<"\n\nYou are confirm delete this member\n";
				cout<<"\n1.yes\n\n2.No\nChoose any option:";
				int ab;
				cin>>ab;
				if(ab==2)
				{
					goto chaman;
				}

			}
		file.close();
		}
		clrscr();
		file.open("member.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		fstream file1;
		file1.open("temp.txt",ios::out|ios::binary);
		MEMBER book1;
		while(file.read((char*)&member,sizeof(member)))
		{
			if(member.getmemberid()==obj)
			{
				cout<<"Member Delete Succesfully";
				getch();
			}
			else
			file1.write((char *)&member,sizeof(member));
		}
		file.close();
		file1.close();
		remove("member.txt");
		rename("temp.txt","member.txt");
		file.open("member.txt",ios::in|ios::out|ios::binary|ios::ate);
		file.seekg(0);
		clrscr();
		int obj1=obj;
		obj++;
		while(file.read((char*)&member,sizeof(member)))
		{
			if(member.getmemberid()==obj)
			{
				obj++;
				int pp=sizeof(member);
				file.seekp(-pp,ios::cur);
				file.write((char *)&obj1,sizeof(obj1));
				int sizeobj=pp-sizeof(obj1);
				file.seekp(sizeobj,ios::cur);
				obj1++;
			}
		}
		file.close();
	}
	else
	if(option==15)
	{
		//exit
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
		{
			system("C:\\windows\\system32\\shutdown/l");
			exit(2);
		}

	}

}

}
else
{
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
		clrscr();
		cout<<count<<":Attemped Left\n";
		getch();
		count--;
		clrscr();
		goto kk;
	}


}
}


