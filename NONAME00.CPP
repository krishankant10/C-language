//write a program to create an dynamic arry and after use de-allocate in c++
#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int n,*p;
	cout<<"How many Member Want to add :";
	cin>>n;
	p=new int[n];
	cout<<"Memory allocate Succesfully"<<endl;
	cout<<"Enter "<<n<<" Number:";
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		cout<<endl;
	}
	cout<<"Numbers are";
	for(i=0;i<n;i++)
		cout<<p[i]<<"\t";
	delete[] p;
	cout<<"Memory Delete Succesfully!";
	getch();
}

