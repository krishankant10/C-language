#include <iostream.h>
#include <conio.h>
#include <string.h>
const int buff_size=50;
class string
{
     private:
       char str[buff_size];
     public:
       string()
       {
	strcpy(str,"");
       }
       string(char *mystr)
       {
	strcpy(str,mystr);
       }
       void echo()
       {
	cout<<str;
       }
       operator char *()
       {
	return str;
       }
};
void main()
{
	clrscr();
	char msg[20]="OOPs the Great";
	string str1;
	str1=msg;
	cout<<"str1 =";
	str1.echo();
	char *receive;
	string str2="It is easy to learn";
	cout<<"\n\nstr2:";
	receive=str2;

	cout<<receive<<endl;
	getch();
	getch();
	getch();
}








