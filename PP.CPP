#include <iostream.h>
#include <conio.h>
#include <string.h>
class test
{
	char *name;
	public:
		test();
		test(char *msg);
		~test();
};
test::test()
{
	name=new char [strlen("unnamed")+1];
	strcpy(name,"unnammed");
	cout<<"Test object unnammed creted:"<<endl;
}
test::test(char *msg)
{
	name=new char[strlen(msg)+1];
	strcpy(name,msg);
	cout<<"Test object "<<msg<<"Created "<<endl;
}
test::~test()
{
	cout<<"kk Test object :"<<name<<"Destroyed "<<endl;
	delete name;
}
test g("global");
void func()
{
	test l("func");
	cout<<"Here's function func()"<<endl;
}
void main()
{
	clrscr();
	test x("Main");
	func();
	cout<<"main() function - termination "<<endl;
	getch();
}