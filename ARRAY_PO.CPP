#include<iostream.h>
#include<conio.h>
class abc
{
	int a[10],c;
	public:
	void getdata(int *p)
	{
	    cout<<"10 Values is :";
	    for(int i=0;i<10;i++)
        {
            cout<<"\t"<<*(p+i);
            a[i]=*(p+i);
        }
	}
	int show()
	{
        c=0;
        for(int i=0;i<10;i++)
        {
            c=c+a[i];
        }
        cout<<"\nC is "<<c<<"\n\n";
        return c;
	}
};
void main()
{
	abc A;
	int a[20],b,c;
	clrscr();
	cout<<"\nEnter 10 number ";
	for(int i=0;i<10;i++)
	cin>>a[i];
	A.getdata(a);
	int kk=A.show();
	cout<<"\n\nSum Of 10 Values is :"<<kk<<"\n\n";
	getch();
}
