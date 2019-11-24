4. Solution: The error, extra parameter in call to staticFunction::setCount() in function main() error will occur, because an extra parameter 5 is passed to the function setCount().

The correct program is: 

#include <iostream.h>
class staticFunction
{
	static int count;
public:
	static void setCount()
	{
		count++;
	}
	void displayCount()
	{
		cout << count;
	}
};
int staticFunction::count = 10;
void main()
{
	staticFunction obj1;
	obj1.setCount();
	staticFunction::setCount();
	obj1.displayCount();
}
