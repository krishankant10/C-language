#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <string.h>
class emp
{
	char name[30];
	int ecode;
   public:
	emp()
	{}
	emp(char *n,int a)
	{
		strcpy(name,n);
		ecode=a;
	}
};
void main()
{
	clrscr();
	emp e[4];
	e[0]=emp("Krishan",1);
	e[1]=emp("Mohan",2);
	e[2]=emp("Sohan",3);
	e[3]=emp("Rahul",4);
	fstream file;
	file.open("Employee.dat",ios::in|ios::out);
	int i;
	for(i=0;i<4;i++)
	file.write((char *)&e[i],sizeof(e[i]));
	file.seekg(0,ios::end);
	int end=file.tellg();
	cout<<"Number of employee is :"<<end/sizeof(emp);
	getch();
}
