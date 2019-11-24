3. Solution:
The error, Type name expected, occurs. This is because, you cannot inherit a class before defining the same.

The correct program is:

#include <iostream.h>
class A
{
	int i;
};

class AB: virtual A
{
	int j;
};

class AC: A
{
	int k;
};

class ABAC: AB, AC
{
	int l;
};

void main()
{
	ABAC abac;
	cout << "sizeof ABAC:" << sizeof(abac);
}
