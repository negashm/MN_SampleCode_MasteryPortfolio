#include <iostream>
#include <cstdio>
using namespace std;


class Employee 
{
private:
	
	
	char firstName[255]; // First Name
	char lastName[255]; // Last Name 
	bool employeeType; // Hourly Compensation True and annual compensation false 
	int compensation; // Salary

public:


	void set_firstName(const char* inname) { strcpy_s(firstName, inname); }
	void set_lastName(const char* inname) { strcpy_s(lastName, inname); }
	void set_employeeType(bool inp) { employeeType = inp; }
	void set_compensation(int inp) { compensation = inp; }
	void printEntry()


	{
		cout << endl << lastName << ", ";
		cout << firstName << ": $";
		cout << compensation << "per year" << endl;
	}


};


int main()
{
	const int MAX = 3;
  int v;
  bool b;
	Employee entry[MAX];
	for (int x = 0; x < MAX; x++)


	{
		cout << "Entry: " << x << endl;
		char *input = (char *)malloc(255);
		int input2;


		cout << "Enter first name: ";
		cin.ignore();
		cin.getline(input, 255);
		entry[x].set_firstName(input);


		cout << "Enter last name: ";
		cin.getline(input, 255);
		entry[x].set_lastName(input);

		for (;;)

		{
			cout << "Enter employee 1 Hourly or annual salary employee 2: ";
			cin >> input2;
			if (input2 == 1)

			{
				entry[x].set_employeeType(false);
				cout << "Enter hourly rate: ";
				cin >> input2;
				input2 *= 2000;
				entry[x].set_compensation(input2);
				break;
			}
			else if (input2 == 2)
			{
				entry[x].set_employeeType(true);
				cout << "Enter Salary: ";
				cin >> input2;
				entry[x].set_compensation(input2);
				break;
			}
			else
			{
				cout << Enter a valid number: " << endl;
			}
		}
		input == 0;
	}
	for (int i = 0; i < MAX; i++) 
	{
		entry[x].printEntry();
	}
	return 0;
}
