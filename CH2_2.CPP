2. Solution : Illegal structure operation of cout statement.
cout takes the insertion operator (<<) and not the extraction operator (>>).

The correct program is:

#include <iostream.h>
void main()
{
	short i=2500, j=3000;
	cout << "i + j = " << -(i+j);
}
