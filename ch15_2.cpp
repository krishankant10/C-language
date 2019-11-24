2. Solution: The error, syntax error occurred in replace statement, occurs. The replace() function must contain three arguments: the starting position of the character, the number of characters to be replaced, name of the string. Here, the replace() function contain only two arguments.

The correct program is:

#include <iostream.h>
#include <string>

using namespace std;

void main()
{
	string str1("ABCDEF");
	string str2("123");
	string str3;

	str1.insert(2, str2);
	str1.erase(2,2);
	str1.replace(2, 0, str2);

	cout << str1.c_str();
	cout << endl;
}

