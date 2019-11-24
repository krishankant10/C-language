3. Solution : The code will not display the first line of the file. We need to position the file pointer at the beginning of the file using the seekg statement.

The correct program is:

#include <iostream>
#include <fstream.h>

void main()
{
	char buffer[80];
	ifstream in("ch11_3.cpp");

	while(!in.getline(buffer, 80))
	{
		cout << buffer << endl;
	}

	in.seekg(0, ios::beg);

	while(!in.getline(buffer, 80).eof())
	{
		cout << buffer << endl;
	}
}

