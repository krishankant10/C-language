//Q45 read and write a object from a binary file
#include<iostream.h>
#include <conio.h>
#include<fstream.h>
#include<iomanip.h>
class INVENTORY
{
	char name[10];
	int code;
	float cost;
  public:
	void readdata(void);
	void writedata(void);
};
void INVENTORY ::readdata(void)
{
	cout<< "enter name:";
	cin>>name;
	cout<< " enter code:";
	cin>>code;
	cout<< "enter cost :";
	cin>>cost;
}
void INVENTORY :: writedata(void)
{
   cout<<setiosflags(ios::left)
       <<setw(10)<<name
       <<setiosflags(ios::right)
       <<setw(10)<<code
       <<setprecision(2)
       <<setw(10)<<cost<<endl;

}
void main()
{
	clrscr();
	INVENTORY item[3];
	fstream file;
	file.open("STOCK.DAT",ios::in|ios::out);
	cout<<"Enter Deatils of three item\n";
	for(int i=0;i<3;i++)
	{
		item[i].readdata();
		file.write((char *)& item[i],sizeof(item[i]));
	}
	file.seekg(0);
	cout<<"\n ...........OUTPUT.........\n\n" ;
	for(i=0;i<3;i++)
	{
		file.read((char *) & item[i],sizeof(item[i]));
		item[i].writedata();
	}
	file.close();
	getch();
}

