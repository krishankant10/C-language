#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <iomanip.h>
class INVENTORY
{
	char name[10];
	int code;
	float cost;
   public:
	void getdata()
	{
		cout<<"Enter name : ";cin>>name;
		cout<<"Enter Code : ";cin>>code;
		cout<<"Enter cost : ";cin>>cost;
	}
	void putdata()
	{
		 cout<<setiosflags(ios::left)
		     <<setw(10)<<name
		     <<setiosflags(ios::right)
		     <<setw(10)<<code
		     <<setprecision(2)
		     <<setw(10)<<cost<<endl;
	}
};
void main()
{
	clrscr();
	INVENTORY item;
	fstream inoutfile;
	inoutfile.open("STOCK.DAT",ios::ate|ios::in|ios::out|ios::binary);
	inoutfile.seekg(0,ios::beg);
	cout<<"CURRENT CONTENT OF STOCK"<<"\n";
	while(inoutfile.read((char *)&item,sizeof(item)))
	{
		item.putdata();
	}
	inoutfile.clear();//turn of EOF flag
	//Add one more item
	cout<<"\n\nAdd An item\n";
	item.getdata();
	char ch;
	cin.get(ch);
	inoutfile.write((char *)&item,sizeof(item));
	inoutfile.seekg(0);
	cout<<"CONTENT OF APENDED FILE \n";
	while(inoutfile.read((char *)& item,sizeof item))
	{
		item.putdata();
	}
	int last=inoutfile.tellg();
	int n=last/sizeof(item);
	cout<<"Number of object="<<n<<"\n";
	cout<<"Total bytes in the file="<<last<<"\n";
	/*>>>>>>>>>>>>>>>>Modiy the details of n items */

	cout<<"Enter object  no. to be updated:";
	int object;
	cin>>object;
	cin.get(ch);
	int location=(object-1)*sizeof(item);
	if(inoutfile.eof())
		inoutfile.clear();
	inoutfile.seekp(location);
	cout<<"Enter new Values of the object\n";
	item.getdata();
	cin.get(ch);
	inoutfile.write((char *)& item,sizeof item)<<flush;
	inoutfile.seekg(0);
	cout<<"\n\n Content of updated file is \n";
	while(inoutfile.read((char*)& item,sizeof item))
	{
		item.putdata();
	}
	inoutfile.close();
	getch();
}

