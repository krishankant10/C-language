#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int count=0;
	char c;
	cout<<"Input Text\n";
	cin.get(c);
	while(c!='\n')
	{
		cout.put(c);
		count++;
		cin.get(c);
	}
	cout<<"\n Number of charactors="<<count<<"\n";
	getch();
}