2. Solution : The error,  Ambiguity between 'Room::Room()', 'Room::Room(int)', occurs. This is because, the constructor Room(int value=8) accepts one parameter with the default argument. When you create a object without argument, an ambiguity arises between the constructors that are called.

The correct program is:

#include <iostream.h>
class Room
{
	int length;
	int width;
public:
	Room()
	{
		length = 0;
		width = 0;
	}
	Room(int value)
	{
		length = width = value;
	}
	void display()
	{
		cout << length << ' ' << width;
	}
};

void main()
{
	Room objRoom1;
	objRoom1.display();
}

