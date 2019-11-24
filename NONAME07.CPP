#include <iostream.h>
#include <string.h>
#include <graphics.h>
#include <stdlib.h>
#include <fstream.h>
#include <conio.h>
void main()
{

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	settextstyle(BOLD_FONT,HORIZ_DIR,2.9);
	outtextxy(80,220,"Press Any key To Enter Data");
	getch();
	closegraph();
	clrscr();
	int n;
	cout<<"How many student data need:";
	cin>>n;
for(int i=0;i<n;i++)
{
	ofstream fout;
	fout.open("studenttable",ios::app);
	cout<<"Enter Student Name:";
	char name[80];
	cin>>name;
	fout<<"Name : "<<"\n"<<name<<"\n";
	cout<<"Enter Student roll.no";
	int rno;
	cin>>rno;
	fout<<"Roll No. : "<<rno<<"\n";
	cout<<"Enter five subject marks:";
	int hindi,english,physics,chemistry,maths;
	cin>>hindi>>english>>physics>>chemistry>>maths;
	fout<<"Hindi :"<<hindi<<"\n";
	fout<<"English :"<<english<<"\n";
	fout<<"Physics :"<<physics<<"\n";
	fout<<"Chemistry :"<<chemistry<<"\n";
	fout<<"Maths :"<<maths<<"\n";
	float total,per;
	total=hindi+english+physics+chemistry+maths;
	per=total/5.0;
	fout<<"Total is : "<<total;
	fout<<"\n\nPercentage is : "<<per<<"\n\n\n";
	fout.close();
}
	clrscr();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	settextstyle(BOLD_FONT,HORIZ_DIR,2.9);
	outtextxy(40,220,"Press Any key To Process Scanning");
	getch();
	closegraph();
	clrscr();
	gotoxy(30,12);
	cout<<"Enter Name for print here data:";
	char string[30];
	cin>>string;
	ifstream ifn;
	ifn.open("studenttable");
	char line[100];
	while(1)
	{
		if(ifn.eof()!=NULL)
		{
			getch();
		       exit(0);
			ifn.close();
		}
			ifn.getline(line,50);
			if(strcmp(line,string)==0)
			{
				cout<<line;
			}
	}
	ifn.close();

	getch();
}