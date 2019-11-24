2. Solution : The statement cout.setf(ios::right) does not work. Whenever you set the width of a digit, it remains for the successive cout statements until you unset it. In other words, the width() function cannot retain its settings. Hence, the width should be specified for each item. Therefore, the right aligment in cout.setf(ios::right) will not have any effect.

The output of the above program is given below:
 
   99
99   
99 (right alignment is not working)

The correct program is:

#include <iostream.h>

void main()
{
	cout.width(5);
	cout << "99" << endl;
	
	cout.setf(ios::left);
	cout.width(5);
	cout << "99" << endl;

	cout.setf(ios::right);
	cout.width(5);
	cout << "99" << endl;
}



