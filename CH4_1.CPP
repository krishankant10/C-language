1. Solution : 3. Type mismatch error in redeclaration of 'fun()' 
Functions cannot be overloaded based on return type. The signatures of the overloaded functions should be different.

The correct program is: 
#include <iostream.h>
int fun()
{
	return 1;
}

float fun(float i)
{
	return i;
}

void main()
{
	cout << (int)fun() << ' ';
	cout << (float)fun(10.23) << ' ';
}

