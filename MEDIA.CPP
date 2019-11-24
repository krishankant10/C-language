#include <iostream.h>
#include <conio.h>
#include <process.h>
#include <new.h>
void main(void)
{
	clrscr();
	int *data,size;
	set_new_handler(0);
	cout<<"How Many Byte To Allocate:";
	cin>>size;
	if(data=new int[size])
	cout<<"Memory Allocation Success:, Address="<<data;
	else
	{
		cout<<"Could not allocation .bye.......";
	exit(1);
	}
	delete data;
	getch();
}