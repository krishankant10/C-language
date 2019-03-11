//Q42 read and write rom file
#include <iostream.h>
#include <fstream.h>
#include <conio.h>
void main()
{
	clrscr();
	ofstream fout;
	fout.open("country");
	fout<<"United State of america\n";
	fout<<"United Kingdom\n";
	fout<<"South Korea\n";
	fout.close();
	fout.open("capital");
	fout<<"Washingtom\n";
	fout<<"London\n";
	fout<<"Seoul\n";
	fout.close();
	fout.open("country",ios::app);
	fout<<"India\n";
	fout.close();
	fout.open("capital");
	fout<<"New Delhi\n";
	fout.close();
	const int n=80;
	char line[n];
	ifstream fin;
	fin.open("Country");
	cout<<"Contents of country file \n";
	while(fin)
	{
		fin.getline(line,n);
		cout<<line<<"\n";
	}
	fin.close();
	fin.open("capital");
	cout<<"Contents of capital file \n";
	while(fin)
	{
		fin.getline(line,n);
		cout<<line<<"\n";
	}
	fin.close();
	getch();
}

