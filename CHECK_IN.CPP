#include <iostream.h>
#include <conio.h>
class a
{
	private:
		int privatea;
	protected:
		int protecta;
	public:
		int publica;
};
class b :public a
{
	private:
		int privateb;
	protected:
		int protectb;
	public:
		int publicb;
	void myfunc()
	{
		int a;
	       //	a=privatea;
		a=protecta;
		a=publica;
	}
};
class c :public b
{
	private:
		int privateb;
	protected:
		int protectb;
	public:
		int publicb;
	void myfunc()
	{
		int a;
	       //	a=privatea;
		a=protectb;
		a=publicb;
		cout<<"Mohan"<<publicb;
	}
};
void main()
{
	c m;
	m.myfunc();
	getch();

}

