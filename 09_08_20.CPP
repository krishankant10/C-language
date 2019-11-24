#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *getnode(int num)
{
	struct node *x;
	x=(struct node *)malloc(sizeof(struct node));
	//x=new node;
	x->data=num;
	x->next=NULL;
	return x;
}
void print(struct node *f)
{
	while(f!=NULL)
	{
		cout<<"-->"<<f->data;
		f=f->next;
	}
}
void count(struct node *f)
{
	int cnt=0;
	while(f!=NULL)
	{
		cnt++;
		f=f->next;
	}
	cout<<"\n\n\ntotal Nodes are :"<<cnt;
}
void sum(struct node *f)
{
	int s=0;
	while(f!=NULL)
	{
		s=s+f->data;
		f=f->next;
	}
	cout<<"\n\n\nSum of All Nodes are:"<<s;
}
void main()
{
	struct node *f=NULL,*c,*l;
	int num;
	clrscr();
	cout<<"Enter Ny no.";
	cin>>num;
	while(num!=0)
	{
		c=getnode(num);
		if(f==NULL)
		{
			f=c;
			l=c;
		}
		else
		{
			l->next=c;
			l=c;
		}
		num--;
	}
print(f);
count(f);
sum(f);
getch();
}



