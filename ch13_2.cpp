2. Solution: The error, Catch handlers must specify one type, occurs. This is because, there is no type definition specified for the variable i in the Catch statement.

The correct program is:

#include <iostream.h>

void callFunction(int i)
{
	if(i)
		throw 1;
	else
		throw 0;
}


void callFunction(char *n)
{
	try
	{
		if(n)
			throw "StringOK";
		else
			throw "StringError";
	}
	catch(char* name)
	{
		cout << name << " ";
	}
}

void main()
{
	try
	{
		callFunction("testString");
		callFunction(1);
		callFunction(0);
	}
	catch(int i)
	{
		cout << i << " " ;
	}
	catch(char *name)
	{
		cout << name << " ";
	}
}