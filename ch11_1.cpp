1. Solution: The error, could not find a match for ifstream::get(char near*) in function main, occurs because the size parameter is not specified in the get statement.

The correct program is:

#include <iostream.h>
#include <fstream.h>

void main()
{
	const int size = 100;
	char buffer[size];

	ifstream in("ch11_1.cpp");
	ofstream out("ch11_1Temp.cpp");
	while(in.get(buffer, size))
	{
		in.get();
		cout << buffer << endl;
		out << buffer << endl;
	}
	in.close();
	out.close();
}



