3. Solution: The error, expression type does not match the return type in function item:: getCountAddress(), will occur, because the return statement in the function getCountAddress() should return the address value of the count, but in the return statement the address of (&) operator is missing.

The correct program is: 

#include <iostream.h>
class Item
{
private:
	static int count;
public:
	Item()
	{
		count++;
	}
	int getCount()
	{
		return count;
	}
	int* getCountAddress()
	{
		return &count;
	}
};
int Item::count = 0;

void main()
{
	Item objItem1;
	Item objItem2;

	cout << objItem1.getCount() << ' ';
	cout << objItem2.getCount() << ' ';

	cout << objItem1.getCountAddress() << ' ';
	cout << objItem2.getCountAddress() << ' ';
}