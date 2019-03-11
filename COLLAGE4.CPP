#include<iostream>
#include<conio.h>
#define MAX 5
using namespace std;
int top, status;
void push (int stack[], int item)
{
	if (top == (MAX-1))
	status = 0;
	else
	{
	status = 1;
	++top;
	stack [top] = item;
	}
}
int pop (int stack[])
{
	int ret;
	if (top == -1)
	{
		ret = 0;
		status = 0;
	}
	else
	{
		status = 1;
		ret = stack [top];
		top=top-1;
	}
	return ret;
}
void display (int stack[])
{
	int i;
	cout<<"\nThe Stack is: ";
	if (top == -1)
	cout<<"empty";
	else
	{
		for (i=top; i>=0; --i)
		cout<<"\n--------\n|"<< stack[i]<< "|\n--------";
	}
	cout<<endl;
}
int main()
{
	int stack [MAX], item;
	int ch;
//	clrscr ();
	top=top-1;
	do
	{
		do
		{
			cout<<"\nMAIN MENU";
			cout<<"\n1.PUSH (Insert) in the Stack";
			cout<<"\n2.POP  (Delete) from the Stack";
			cout<<"\n3.Exit (End the Execution)";
			cout<<"\nEnter Your Choice: ";
			cin>>ch;
			if (ch<1 || ch>3)
			cout<<"\nInvalid Choice, Please try again";
		}
		while (ch<1 || ch>3);
		switch (ch)
		{
			case 1:
				cout<<"\nEnter the Element to be pushed : ";
				cin>>item;
				cout<<item;
				push (stack, item);
				if (status)
				{
					cout<<"\nAfter Pushing ";
					display (stack);
					if (top == (MAX-1))
					cout<<"\nThe Stack is Full";
				}
				else
				cout<<"\nStack overflow on Push";
				break;
			case 2:
				item = pop (stack);
				if (status)
				{
					cout<<"\nThe Popped item is  After Popping: ";
					display (stack);
				}
				else
				cout<<"\nStack underflow on Pop";
				break;
			default:
				cout<<"\nEND OF EXECUTION";
			}
	}
	while (ch != 3);
	getch();
}
