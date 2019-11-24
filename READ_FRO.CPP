#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
	clrscr();
	const int size=80;
	char line[size];
	ifstream fin1,fin2;
	fin1.open("country.txt");
	fin2.open("capital.txt");
	for(int i=1;i<=10;i++)
	{
		if(fin1.eof()!=0)
		{
			cout<<"Exit from country\n";
			getch();
			exit

		}
		fin1.getline(line,size);
		cout<<"Capital of "<<line<<" Is:\n";
		if(fin2.eof()!=0)
		{
			cout<<"Exit from Capital\n";
			exit(1);
		}
		fin2.getline(line,size);
		cout<<line<<"\n";
	}
}
