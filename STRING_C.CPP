#include <iostream.h>
#include <conio.h>
#include <string.h>
const int BUFF_SIZE=50;
enum boolean {FALSE,TRUE};
class string
{
	private:
	  char str[BUFF_SIZE];
	public:
	  string()
	  {
		strcpy(str,"");
	  }
	  void read()
	  {
		cin>>str;
	  }
	  void echo()
	  {
		cout<<str;
	  }
	  boolean operator < (string s)
	  {
		if(strcmp(str,s.str)<0)
			return TRUE;
		else
			return FALSE;
	  }
	  boolean operator > (string s)
	  {
		if(strcmp(str,s.str)>0)
			return TRUE;
		else
			return FALSE;
	  }
	  boolean operator ==(char *mystr)
	  {
		if(strcmp(str,mystr)==0)
			return TRUE;
		else
			return FALSE;
	  }
};
void main()
{
	clrscr();
	string str1,str2;
	while(TRUE)
	{
		cout<<"\nEnter string 1<'end' to stop >:";
		str1.read();
		if(str1=="end")
			break;
		cout<<"Enter String 2:";
		str2.read();
		cout<<"Comparison status";
		str1.echo();
		if(str1<str2)
			cout<<"<";
		else
		    if(str1>str2)
			cout<<">";
		else
		    cout<<" = ";
		str2.echo();
	}
	getch();
}




