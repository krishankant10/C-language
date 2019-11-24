#include <iostream.h>
#include<conio.h>
class staff
{
	public:
	staff()
	{
	cout<<"\n I am in staff class " ;
	}
};
class teacher :public staff
{
	public:
	teacher()
	{
	cout<<"\n I am in teacher class " ;
	}
};
class officer: public staff
{
	public:
	officer()
	{
	cout<<"\n I am in officer class " ;
	}
};
class typist : public staff
{
	public:
	typist()
	{
	cout<<"\n I am in typist class " ;
	}
};
class regular : public typist
{
	public:
	regular()
	{
	cout<<"\n I am in regular class " ;
	}
};
class casual :public typist
{
	public:
	casual()
	{
	cout<<"\n I am in casual class " ;
	}
};
void main()
{
	clrscr();
	regular a;
	getch();
}