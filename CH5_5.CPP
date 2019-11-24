5. Solution: The errors, multiple declaration for objLength1 in function main(), undefined symbol objLength2 in function main(), and objLength1 is assigned a value which is never used in function main(), occurs. This is because the objLength1 is declared twice.

The correct program is:

#include <iostream.h>
class Length
{
	int feet;
	float inches;
public:
	Length()
	{
		feet = 5;
		inches = 6.0;
	}
	Length(int f, float in)
	{
		feet = f;
		inches=in;
	}
	Length addLength(Length l)
	{
		l.inches += this->inches;
		l.feet += this->feet;
		if(l.inches>12)
		{
			l.inches-=12;
			l.feet++;
		}
		return l;
	}
	int getFeet()
	{
		return feet;
	}
	float getInches()
	{
		return inches;
	}
};
void main()
{
	Length objLength1;
	Length objLength2(5, 6.5);
	objLength1 = objLength1.addLength(objLength2);
	cout << objLength1.getFeet() << ' ';
	cout << objLength1.getInches() << ' ';
}
