3. Solution: The error, constructor cannot have a return type specification, occurs. This is because, constructors do not have any return types including void.

The correct program is:

#include <iostream.h>

class Room
{
	int width;
	int height;
	static int copyConsCount;
public:
	Room()
	{
		width = 12;
		height = 8;
	}

	Room(Room& r)
	{
		width = r.width;
		height = r.height;
		copyConsCount++;
	}

	void dispCopyConsCount()
	{
		cout << copyConsCount;
	}
};

int Room::copyConsCount = 0;

void main()
{
	Room objRoom1;
	Room objRoom2(objRoom1);
	Room objRoom3 = objRoom1;
	Room objRoom4;
	objRoom4 = objRoom3;

	objRoom4.dispCopyConsCount();
}