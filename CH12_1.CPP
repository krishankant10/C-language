1. Solution: The error, getNumber cannot be distingished, occurs. To distinguish two getNumber functions, we have to add a parameter int i into the function float getNumber().

The correct program is:

#include <iostream.h>

class Test
{
	int intNumber;
	float floatNumber;
public:
	Test()
	{
		intNumber = 0;
		floatNumber = 0.0;
	}

	int getNumber()
	{
		return intNumber;
	}

	float getNumber(int i)
	{
		return floatNumber;
	}
};

void main()
{
	Test objTest1;
	objTest1.getNumber();
}
