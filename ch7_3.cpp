3. Solution: The error, function should return a value, occurs. This is because, the getwidth() function must return a value, but it is not specified in the function.

The correct program is:

#include <iostream.h>

class Room
{
	float mWidth;
	float mLength;
public:
	Room()
	{
	}
	Room(float w, float h)
		:mWidth(w), mLength(h)
	{
	}

	operator float()
	{
		return (float)mWidth * mLength;
	}

	float getWidth()
	{
		return mWidth;
	}

	float getLength()
	{
		return mLength;
	}
};

void main()
{
	Room objRoom1(2.5, 2.5);
	float fTotalArea;
	fTotalArea = objRoom1;
	cout << fTotalArea;
}

