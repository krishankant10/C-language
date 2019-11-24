1.Solution: The error, getValuesFromUser: undeclared identifier, occurs. This is because, the getValuesFromUser() function cannot be called without using the temp object.

The correct program is:

#include <iostream.h>
#include <vector>

#define NAMESIZE 40

using namespace std;

class EmployeeMaster
{
private:
	char name[NAMESIZE];
	int id;

public:
	EmployeeMaster()
	{
		strcpy(name, "");
		id = 0;
	}

	EmployeeMaster(char name[NAMESIZE], int id)
		:id(id)
	{
		strcpy(this->name, name);
	}

	EmployeeMaster* getValuesFromUser()
	{
		EmployeeMaster *temp = new EmployeeMaster();
		cout << endl << "Enter user name : ";
		cin >> temp->name;
		cout << endl << "Enter user ID : ";
		cin >> temp->id;
		return temp;
	}

	void displayRecord()
	{
		cout << endl << "Name : " << name;
		cout << endl << "ID   : " << id << endl;
	}
};

void main()
{
	vector <EmployeeMaster*> emp;
	EmployeeMaster *temp = new EmployeeMaster();
	emp.push_back(temp->getValuesFromUser());
	emp[0]->displayRecord();
	delete temp;

	temp = new EmployeeMaster("AlanKay", 3);
	emp.push_back(temp);
	emp[emp.capacity()]->displayRecord();
	emp[emp.size()]->displayRecord();
}

