3. Solution: The error, syntax error, occurs. This is because, the keyword class should precede the class names passed to a template.

The correct program is:

#include <iostream.h>

template <class T1, class T2>
T1& MinMax(T1 t1, T2 t2)
{
	return t1 > t2 ? t1 : t2;
	cout << " ";
}

void main()
{
	cout << ++MinMax(2, 3);
}