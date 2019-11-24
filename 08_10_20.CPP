#include <iostream.h>
#include <conio.h>
#include <string.h>
int my_strlen(char *str);
void my_strcpy(char *s2,char *s1);
void my_strcat(char *s2,char *s1);
int my_strcmp(char *s1,char *s2);
void main()
{
	clrscr();
	char temp[100],*s1,*s2,*s3;
	cout<<"Enter String 1:  ";
	cin>>temp;
	s1=new char[strlen(temp)+1];
	my_strcpy(s1,temp);
	cout<<"Enter String 2:  ";
	cin>>temp;
	s2=new char[strlen(temp)+1];
	my_strcpy(s2,temp);
	cout<<"Lenth of string 1: "<<my_strlen(s1)<<endl;
	s3=new char[strlen(s1)+strlen(s2)+1];
	my_strcpy(s3,s1);
	my_strcat(s3,s2);
	cout<<"String on concating :"<<s3<<endl;
	cout<<"String Comparision using.........."<<endl;
	cout<<"Library Function :"<<strcmp(s1,s2)<<endl;
	cout<<"User Function :"<<my_strcmp(s1,s2)<<endl;
	delete s1;
	delete s2;
	delete s3;
	getch();
}
int my_strlen(char *str)
{
	char *ptr=str;
	while(*ptr!='\0')
		++ptr;
	return ptr-str;
}
void my_strcpy(char *s2,char *s1)
{
	while(*s1!='\0')
	  *s2++=*s1++;
	*s2='\0';
}
void my_strcat(char *s2,char *s1)
{
	while(*s2!='\0')
		*s2++;
	while(*s1!='\0')
		*s2++=*s1++;
	*s2='\0';
}
int my_strcmp(char *s1,char *s2)
{
	while(*s1==*s2&&(*s1!=NULL||*s2!=NULL))
	{
	s1++;
	s2++;
	}
	return *s1-*s2;
}






