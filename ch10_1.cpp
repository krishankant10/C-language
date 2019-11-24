1. Solution: To get the correct output, you need to change the statement cin>>buffer1 as cin.getline(buffer1,80), because cin reads input until it encounters a space(' '). Therefore, buffer1 will contain Jack. The remaining words will be copied to getline(buffer2, 80) function and it will not wait for the user to enter any input.

The correct program is:

#include <iostream.h>

void main()
{
	char buffer1[80];
	char buffer2[80];

	cout << "Enter value for buffer1 : ";
	cin.getline(buffer1, 80);
	cout << "Buffer1 : " << buffer1 << endl;

	cout << "Enter value for buffer2 : ";
	cin.getline(buffer2, 80);
	cout << "Buffer2 : " << buffer2 << endl;
}