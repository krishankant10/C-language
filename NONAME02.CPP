#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
 int info;
 node *next;
}
 *start,*newptr,*save,*ptr;
node *create_new_node(int);
void insert_beg(node*);
void display(node*);
void main()
{
 start=NULL;
 int inf;
 char ch='y';
 while(ch=='y'|| ch=='Y')
 {
  clrscr();
  cout<<"\n enter info for the new node...";
  cin>>inf;
  cout<<"\n creating new node!!press enter to continue...";
  system("pause");
  newptr=create_new_node(inf);
  if(newptr!=NULL)
  {
	cout<<"\n new node created succesfully.press to continue...";
	system("pause");
  }
  else
  {
   cout<<"\n cannot create new node!!!aborting!!\n";
   system("pause");
   exit(1);
  }
  cout<<"\n now insewrting this node in begenning of list...\n";
  cout<<"press enter to continue..\n";
  system("pause");
  insert_beg(newptr);
  cout<<"\n now the list is:\n";
  display(start);
  cout<<"\n p[ress y to enter more nodes,nto exit..\n";
  cin>>ch;
 }
 getch();
}
 node *create_new_node(int n)
 {
  ptr=new node;
  ptr->info=n;
  ptr->next=NULL;
  return ptr;
 }
 void insert_beg(node*np)
 {
  if(start==NULL)
  start=np;
  else
  {
   save=start;
   start=np;
   np->next=save;
  }
 }
 void display(node*np)
 {
  while(np!=NULL)
  {
   cout<<np->info<<"->";
   np=np->next;
  }
  cout<<"!!\n";
}