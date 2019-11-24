#include<conio.h>
#include<iostream>
using namespace std;
int A[10], front=-1, rear=-1;
int size_A = sizeof(A)/sizeof(A[0]);
int IsEmpty();
void Insert(int data);
int Delete();
void print();
int main()
{
//	clrscr();
	Insert(5);
	Insert(12);
	Insert(11);
	Insert(5);
	Delete();
	Delete();
	Delete();
	print();
	getch();
}

int IsEmpty()
{
	if(rear==-1 && front==-1)
		return 1;
	else
		return 0;
}

void Insert(int data)
{
	if(IsEmpty())
		front = rear = 0;
	else if( rear+1 == front )
		cout<<"\n Queue is Full \n";
	else
		rear = (rear+1)%size_A;
	A[rear] = data;
}

int Delete()
{
	if(IsEmpty())
		cout<<"\n Queue is Empty \n";
	else
		front = (front+1)%size_A;
	return A[front-1];
}

void print()
{
	int i=0;
	for(i=front;i<=rear;i++)
	cout<<A[i];
}
