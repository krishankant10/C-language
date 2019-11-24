#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <iomanip.h>
#include<stdlib.h>
#include <fstream.h>
class list
{
	char name[20],number[10];
   public:
	/*list()
	{
		strcpy(name,"\0");
		strcpy(number,"\0");
	} */
	void getdata()
	{
		cout<<"Enter Name: ";gets(name);
		cout<<"Enter Contact Number: ";gets(number);
	}
	void putdata()
	{
		cout<<setw(10)<<name
		    <<setw(15)<<number<<endl;
	}
	char * getname()
	{
		return name;
	}
	char * getno()
	{
		return number;
	}
};
void main()
{
	clrscr();
	fstream file;
	list num;
while(1)
{
	clrscr();
	gotoxy(30,10)  ;
	cout<<"1.Add Number";
	gotoxy(30,12) ;
	cout<<"2.Show List";
	gotoxy(30,14);
	cout<<"3.Update no.";
	gotoxy(30,16);
	cout<<"4. Search By Name";
	gotoxy(30,18);
	cout<<"5.Search By Number";
	gotoxy(30,20);
	cout<<"6.EXIT";
	gotoxy(30,8);
	cout<<"Choose any option...:";
	int option;
	cin>>option;
if(option==1)
{
	//add number
		clrscr();
		file.open("ist.txt",ios::app|ios::out);
		file.seekg(0,ios::end);
		num.getdata();
		file.seekp(0,ios::end);
		file.write((char *)&num,sizeof(num));
		file.close();
}
else
if(option==2)
{
	//show list
		file.open("ist.txt",ios::app|ios::in);
		file.seekp(0,ios::beg);
		clrscr();
		cout<<"size of num is :"<<sizeof(num);
		cout<<"\n\nGet pointer in file:"<<file.tellg();
		cout<<"\n\nPut pointer in file :"<<file.tellp()<<endl;
		cout<<"-------------------------------------------\n";
		cout<<setw(10)<<"Name"<<setw(15)<<"Number\n";
		cout<<"-------------------------------------------\n";
		cout<<"-------------------------------------------\n";
		while(file.read((char *)&num,sizeof (num)))
		{
		       num.putdata();
		}
		cout<<"-------------------------------------------\n";
		cout<<"Get pointer in file:"<<file.tellg();
		cout<<"\n\nPut pointer in file :"<<file.tellp()<<endl;

		file.close();
		getch();
}
else
if(option==3)
	{
	  //update no

	}
else
if(option==4)
{
	//search by name
	clrscr();
	char n[11];
	cout<<"Enter NAME: ";
	cin>>n;
	file.open("ist.txt",ios::in|ios::out|ios::ate|ios::binary);
	file.seekp(0);
	cout<<"position:"<<file.tellp();
	while(file.read((char *)&num,sizeof(num)))
	{
		if(strcmp(n,num.getname())==0)
		{
			cout<<"\n\n\nNumber is :"<<num.getno();
		}
	}
	cout<<"\n\nAfter position:"<<file.tellp();
	file.close();
	cout<<"\n\nPress........";
	getch();
}
else
if(option==5)
{
	//search by no
	clrscr();
	char n[11];
	cout<<"Enter Contact number: ";
	cin>>n;
	file.open("list.txt",ios::in|ios::out|ios::ate|ios::binary);
	file.seekp(0);
	cout<<"position:"<<file.tellp();
	while(file.read((char *)&num,sizeof(num)))
	{
		if(strcmp(n,num.getno())==0)
		{
			cout<<"\n\n\nName is :"<<num.getname();
		}
	}
	cout<<"\n\nAfter position:"<<file.tellp();
	file.close();
	cout<<"\n\nPress........";
	getch();
}
else
if(option==6)
{
	//exit
	exit(0);
}
} //while end
} //main end

