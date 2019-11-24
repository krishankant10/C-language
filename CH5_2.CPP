2. Solution: The error, Room::width is not accessible, will occur, because in a class, all the member variables and member functions are private by default.

The correct program is: 

#include <iostream.h>
class Room
{
public:
	int width, height;
	void setValue(int w, int h)
	{
		width = w;
		height = h;
	}
};
void main()
{
	Room objRoom;
	objRoom.width = 12;
}

