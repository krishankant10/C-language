1.Solution : Compile time error : cannot add two pointer
We need to use string keyword to represent a string value. Here, we should use it to represent two string values while concatenating them.

The correct program is: 

#include <iostream.h>
#include <string>

using namespace std;

void main()
{
	string str1("ghi");
	string str2(string("abc") + string("def"));
	str2+=str1;
	cout << str2.c_str();
}
