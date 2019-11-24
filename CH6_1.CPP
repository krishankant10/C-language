1. Solution :The error, no appropriate default constructor available Room::Room(), occurs. 
This is because, default constructor must be available if any parameterized constructor exists in the code.

The correct program is:

#include <iostream.h>
class Room
{
	int length;
	int width;
public:
	Room()
	{
	}

	Room(int l, int w=0):
		width(w),
		length(l)
	{
	}
};
void main()
{
	Room objRoom1;
	Room objRoom2(12, 8);
}

