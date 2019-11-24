3. Solution : The error, namespace must be defined as global, occurs. This is because, the namespace Inside should not be inside the main() function.

The correct program is: 

#include <iostream.h>

namespace A
{
	int i;
	void dispI()
	{
		cout << i;
	}
}

namespace Inside
{
	int insideI;
	void dispInsideI()
	{
		cout << insideI;
	}
}
void main()
{

	A::i = 10;
	cout << A::i;
	A::dispI();

	Inside::insideI = 20;
	cout << Inside::insideI;
	Inside::dispInsideI();

}
