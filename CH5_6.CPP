6. Solution : The error, undefined symbol 'Room' in main(), will occur, because a class, which is declared inside a function can be accessed only inside that function.

The correct program is:

#include <iostream.h>

class Room
{
	int width, height;
public:
	void setValue(int w, int h)
	{
		width = w;
		height = h;
	}
	void displayValues()
	{
		cout << (float)width << ' ' <<  (float)height;
	}
};

void Area()
{
	Room objRoom1;
	objRoom1.setValue(12, 8);
	objRoom1.displayValues();
}

void main()
{
	Area();
	Room objRoom2;
}

*/