#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <string.h>
#include <graphics.h>
void main()
{
	clrscr();
	   int gd = DETECT, gm;

   initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

   settextstyle(BOLD_FONT,HORIZ_DIR,2.9);
   outtextxy(80,200,"Press any key to Enter String");
   getch();
	clrscr();
   //start program
   char string[80];
   cout<<"Enter A string:";
   cin>>string;
   int len=strlen(string);

   fstream file;
   cout<<"Opening the'TEXT' file and storing the string in it.\n\n";

   file.open("TEXT",ios::in|ios::out);
   for(int i=0;i<len;i++)
   {
	file.put(string[i]);
   }
   file.seekg(0);

   char ch;
   cout<<"Reading the file content:";
   while(file)
   {
	file.get(ch);
	cout<<ch;
   }
   getch();

}
