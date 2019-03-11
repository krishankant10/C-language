#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int items[4]={10,8,12,15};
	int cost[4]={75,100,60,99};
	cout.width(5);
	cout<<"ITEMS";
	cout.width(8);
	cout<<"COST";
	cout.width(15);
	cout<<"TOTAL VALUE"<<"\n";
	int sum=0;
	for(int i=0;i<4;i++)
	{
		cout.width(5);
		cout<<items[i];
		cout.width(8);
		cout<<cost[i];
		int value=items[i]*cost[i];
		cout.width(15);
		cout<<value<<"\n";
		sum=sum+value;
	}
	cout.width(32);
	cout<<"-----------\n";
	cout.width(28);
	cout<<sum<<endl;
	cout.width(32);
	cout<<"------------";
	getch();
}
