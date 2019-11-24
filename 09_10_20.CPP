#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define succ(node) node->next
struct list
{
	int data;
	list *next;
};
list *insertnode(int data,list *first)
{
	list *newnode;
	newnode = new list;
	if(newnode==NULL)
	{
		cout<<"Error: Out-of-memory"<<endl;
		exit(1);
	}
	newnode->data=data;
	succ(newnode)=first;
	return newnode;
}
list *deletenode(int data,list *first)
{
	list *current,*pred;
	if(!first)
	{
		cout<<"Empty list"<<endl;
		return first;
	}
	for(pred=current=first;current;pred=current,current=succ(current))
	  if(current->data==data)
	  {
		if(current==first)
		   first=succ(current);
		else
		   succ(pred)=succ(current);
		   delete current;
		   return first;
	  }
	  return first;
}
void displaylist(list *first)
{
	list *LIST;
	for(LIST=first;LIST;LIST=succ(LIST))
	     cout<<"->"<<LIST->data;
	     cout<<endl;
}
void main()
{
	clrscr();
	list *LIST=NULL;
	int choice,data;
	cout<<"Linked-list Manipulation program..\n";
	while(1)
	{
		cout<<"List operation,1-insert,2-Dispaly,3-delete,4-Quit:";
		cin>>choice;
		switch(choice)
		{
		case 1:
			cout<<"ENter data for node to be created :";
			cin>>data;
			LIST=insertnode(data,LIST);
			break;
		case 2:
			cout<<"List Contents:";
			displaylist(LIST);
			break;
		case 3:
			cout<<"Enter Data for node to be deleted:";
			cin>>data;
			LIST=deletenode(data,LIST);
			break;
		case 4:
			cout<<"End of Linked List Computation !! .\n";
			return;
			getch();
		default:
			cout<<"Bad option Selected\n";
			break;
		}
	}
getch();
}







