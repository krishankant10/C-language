#include <iostream.h>
#include <conio.h>
#include <string.h>
class person
{
	char *name,*address,*phone;
	public:
		person(char *namein,char *addin,char *phonein);
		~person();
		void changename(char const *namein);
		char const *getname(void) const;
		char const *getadd(void)const;
		char const *getphone(void)const;
};
//constructor
void person::person(char *namein,char *addin,char *phonein)
{
	name=new char[strlen(namein)+1];
	strcpy(name,namein);
	address=new char[strlen(addin)+1];
	strcpy(address,addin);
	phone=new char[strlen(phonein)+1];
	strcpy(phone,phonein);
}
//destructor release memory allocation to class data member
inline void person::~person()
{
	delete name;
	delete address;
	delete phone;
}
//interface function get....()
inline char const *person ::getname()const
{
	return name;
}
inline char const *person ::getadd()const
{
	return address;
}
inline char const *person ::getphone()const
{
	return phone;
}
void person :: changename(char const *namein)
{
	if(name)
		delete name;
		name=new char[strlen(namein)+1];
		strcpy(name,namein);
}
void printperson(person const &p)
{
	if(p.getname())
	cout<<"name :"<<p.getname()<<endl;
	if(p.getadd())
	cout<<"Address :"<<p.getadd()<<endl;
	if(p.getphone())
	cout<<"phone :"<<p.getphone()<<endl;
}
void main()
{
	clrscr();
	person const me("Rajkumar","E-mail:agrasenmaharaj.jaipur@gmail.com","+917976611046");
	printperson(me);
	person you("XYZ","not sure","not sure");
	printperson(you);
	me.changename("BITTU");
	cout<<"you XYZ to BITTU"<<endl;
	printperson(me);
	getch();
}




















