1. Solution: Syntax error : An additional '/' character in the comment entry.
The format for mulitple line comment entries is /* .......*/.

The correct program is:
#include <iostream.h>

void main()
{
	int i = 0;
	i = i + 1;
	cout << i << " ";
	/*comment\*/i = i + 1;
	cout << i;
}



