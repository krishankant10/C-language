#include<iostream.h>
#include<conio.h>
#include<string.h>
class customer
{
	    int id,bl;
	    char n[10],t[10];
	    public:
	    void setdata (int cus_id, int cus_bl, char cus_type[],char cus_name[])
	    {
	    id = cus_id;
	    bl = cus_bl;
	    strcpy(t,cus_type);
	    strcpy(n,cus_name);
	    }
	    int getcus_id ()
	    {
	    return id;
	    }
	    int getcus_bl()
	    {
	    return bl;
	    }
	    char *getcus_type()
	    {
	    return t;
	    }
	    char *getname()
	    {
	    return n;
	    }
};
	  void main()
	  {
	  customer c[3];
	  int i,id,bl;
	  char n[10],t[10];
	  clrscr();
	  for(i=0;i<3;i++)
	  {
	  cout<<"\n enter customer name : ";
	  cin>>n;
	  cout<<"\n enter customer id : ";
	  cin>>id;
	  cout<<"\n enter customer blance : ";
	  cin>>bl;
	  cout<<"\nEnter Account Type : ";
	  cin>>t;
	  c[i].setdata(id,bl,t,n);
	  }
	  for(i=0;i<3;i++)
	  {
	  cout<<"\n enter customer name : "<<c[i].getname();
	  cout<<"\n enter customer id : "<<c[i].getcus_id();
	  cout<<"\n enter customer blance : "<<c[i].getcus_bl();
	  cout<<"\n enter customer type of account : "<<c[i].getcus_type();
	  cout<<"\n                            ";
	  }
	  getch();
	  }


