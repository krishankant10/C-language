#include<iostream.h>
#include<conio.h>
#include<string.h>

class student
{
    int r;
    char n[10];
    public:
    void setdata (int rol,char no[10])
    {
     r=rol;
     strcpy(n,no);
     }
     int getroll()
      {
      return r;
      }
     char *getname()
     {
     return n;
     }

};
     void main()
     {
     student s[3];
     int i,r,p;
     char n[10];
     clrscr();
     cout<<"How many student data need:";
     cin>>p;
     for (i=0;i<p;i++)
     {
     cout<<"\n enter roll no : ";
     cin>>r;
     cout<<"\nEnter Name : ";
     cin>>n;
     s[i].setdata(r,n);
     }
     cout<<endl<<endl<<p<<"student data is :\n";
     for (i=0;i<p;i++)
     {
     cout<<"\n roll no is : "<<s[i].getroll();
     cout<<"\n name is  : "<<s[i].getname();
     cout<<"\n-------------------------------";
     }
     getch();
     }


