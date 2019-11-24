#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <stdlib.h>
#include <fstream.h>
class list
{
	char name[20],number[10];
   public:
	void getdata()
	{
		cout<<"Enter Name: ";cin>>name;
		cout<<"Enter Contact Number: ";cin>>number;
	}
	void putdata()
	{
		cout<<setw(10)<<name
		    <<setw(15)<<number<<endl;
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
	gotoxy(30,15)  ;
	cout<<"1.Add Number";
	gotoxy(30,17) ;
	cout<<"2.Show List";
	gotoxy(30,19);
	cout<<"3.EXIT";
	gotoxy(30,12);
	cout<<"Choose any option...:";
	int option;
	cin>>option;
if(option==1)
{
		clrscr();
		num.getdata();
		file.open("number_list.txt",ios::in|ios::out|ios::ate|ios::binary);
		file.seekp(0,ios::end);
		file.write((char *)&num,sizeof(num));
		file.close();
}
else
if(option==2)
{
		file.open("number_list.txt",ios::in|ios::out|ios::ate|ios::binary);
		file.seekg(0);
		clrscr();
		cout<<"-------------------------------------------\n";
		cout<<setw(10)<<"Name"<<setw(15)<<"Number\n";
		cout<<"-------------------------------------------\n";
		cout<<"-------------------------------------------\n";
		while(file.read((char *)&num,sizeof num))
		{
		       num.putdata();
		}
		cout<<"-------------------------------------------\n";
		file.close();
		getch();
}
else
if(option==3)
	{
	exit(0);
	} //exit()if close
} //while end
} //main end

