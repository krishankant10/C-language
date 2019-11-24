5. Solution: The error, undefined symbol str in function main(), occurs. This is because, the memory is not allocated for the variable str.

The correct program is:

#include <iostream.h>
#include <malloc.h>

char* allocateMemory();

void main()
{
	char* str;
	str = allocateMemory();
	cout << str;
	delete str;
	str = "	";
	cout << str;
}

char* allocateMemory()
{
      	char* str = new char(50);
	str = "Memory allocation test, ";
	return str;
}
