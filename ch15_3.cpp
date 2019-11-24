3. Solution: The error, cannot convert const int to const string, occurs. This is because, an integer value cannot be passed to a string variable.

The correct program is:

#include <iostream>
#include <string>

using namespace std;

class Product
{
	int iProductNumber;
	string strProductName;
public:
	Product()
	{
	}

	Product(const int &number, const string &name)
	{
		setProductNumber(number);
		setProductName(name);
	}

	void setProductNumber(int n)
	{
		iProductNumber = n;
	}

	void setProductName(const string str)
	{
		strProductName = str;
	}

	int getProductNumber()
	{
		return iProductNumber;
	}

	const string getProductName()
	{
		return strProductName ;
	}

	Product& operator = (Product &source)
	{
		setProductNumber(source.iProductNumber);
		string strTemp = source.strProductName;
		setProductName(strTemp);
		return *this;
	}

	void display()
	{
		cout << "ProductName : " << getProductName() ;
		cout << " " ;
		cout << "ProductNumber : " << getProductNumber() ;
		cout << endl;
	}
};

void main()
{
	Product p1(1, "Honey");
	Product p2(3, "Dates");
	Product p3;
	p3 = p2 = p1;

	p3.display();
	p2.display();
}

