2. Solution :  An infinite loop occurs that displays the first line of the specified file. Inside the while loop, after reading the first line of the file, the file pointer is again positioned to the beginning of the file. Hence it results in an infinite loop.


The correct program is:

void main()
{
	char buffer[80];
	ifstream fin;
	fin.open("ch11_2.cpp", ios::nocreate);
	while(!fin.eof())
	{
		fin.getline(buffer, 80);
		cout << buffer;
	}
}
