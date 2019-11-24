#include<iostream.h>
#include <conio.h>
class Meter
{
    private:
	float length;
    public:
	Meter()
	{
		length=0.0;
	}
	//converting from basic data-item to user defined type
	//InitLength is in centimeter unit

	Meter(float InitLength)
	{
		length=InitLength/100.0;
	}
	//converting from user-defined type to basic data-item
	//i.e. from meter to centimeter
	operator float()
	{
		float LengthCms;
		LengthCms=length*100.0;
		return (LengthCms);
	}
	void getlength()
	{
		cout<<"\n Enter Length(in meter):";
		cin>>length;
	}
	void showlength()
	{
		cout<<"Length (In meter )="<<length;
	}
};
void main()
{
	//Basic to user defined conversion demostration Section
	clrscr();
	Meter meter1;
	float length1;
	cout<<"Enter length(in cms):";
	cin>>length1;
	meter1=length1;
	meter1.showlength();
	Meter meter2;
	float length2;
	meter2.getlength();
	length2=meter2;
	cout<<"Length(in cms)="<<length2;
	getch();
}