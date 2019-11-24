1. Solution: The error, could not find a match for space::space (int) in function space operator :: ++(), occurs. The statement, return Space(mCount) creates a temporary object. It calls a constructor with one int variable and it is not available in this program. The constructor to be included in the program is 
Space(int i)
{
}

The correct program is:

#include <iostream.h>

class Space
{
	int mCount;
public:
	Space()
	{
		mCount = 0;
	}
	Space(int i)
	{

	}

	Space operator ++()
	{
		mCount++;
		return Space(mCount);
	}
};

void main()
{
	Space objSpace;
	objSpace++;
}