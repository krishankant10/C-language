#include<iostream.h>
#include<conio.h>
#include<string.h>
class employee
{
	int id,bs,h,d,pf,c;
	char no[10];
	public:
	void setdata (int e_id,int basic,char n[],int hr,int da,int p,int cca)
	{
	id =e_id;
	bs=basic;
	strcpy(no,n);
	h=hr;
	d=da;
	pf=p;
	c=cca;
	}
	 int gete_id()
	{
	  return id;
	}
	char *getname()
	{
	return no;
	}
	int getsal()
	{
	return bs;
	}
	int gethr()
	{
	return h;
	}
	int getda()
	{
	return d;
	}
	int getpf()
	{
	return pf;
	}
	int getcca()
	{
	return c;
	}

};
     void main()
     {
     employee e[3];
     int i,id,bs,h,d,g,ne,p,c;
     float hra,da,pf,cca,gs;
     char no[10];
     clrscr();
     for(i=0;i<3;i++)
     {
      cout<<"\n enter employee id : ";
      cin>>id;
      cout<<"\n enter basic sallery : ";
      cin>>bs;
      cout<<"\n enter employee name : ";
      cin>>no;
      cout<<"\n enter employee hr : " ;
      cin>>h;
      cout<<"\n enter employee da : ";
      cin>>d;
      cout<<"\n enter employee pf : ";
      cin>>p;
      cout<<"\n enter employee cca : ";
      cin>>c;

      e[i].setdata(id,bs,no,h,d,p,c);
      }
      for(i=0;i<3;i++)
      {
      cout<<"\n employee name : "<<e[i].getname();
      cout<<"\n employee id : "<<e[i].gete_id();
      cout<<"\n employee basic sallery : "<<e[i].getsal();
      hra = e[i].gethr()/100.0*e[i].getsal();
      da = e[i].getda()/100.0*e[i].getsal();
      pf = e[i].getpf()/100.0*e[i].getsal();
      cca = e[i].getcca()/100.0*e[i].getsal();
      gs = e[i].getsal()+hra+da-pf-cca;
      cout<<"\ngross sallery : "<<gs<<"\n\n\n\n";
      }
      getch();
      }




