#include <iostream.h>
#include <conio.h>
#include <string.h>
class person
{
	char name[20];
	float age;
    public:
	person(char *s,float a)
	{
		strcpy(name,s);
		age=a;
	}
	person & person :: grether(person &x)
	{
		if(x.age>=age)
			return x;
		else
			return *this;
	}
	void display(void)
	{
		cout<<"name:"<<name<<"\n"<<"Age:"<<age<<"\n";
	}
};
void main()
{
	person p1("John",37.50),p2("Krishankant",50.0),p3("Mohan",40.25);
	clrscr();
	person p=p2.grether(p3);
	cout<<"Elder person is :\n";
	p.display();
	getch();
}
