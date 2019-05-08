//Populate the objects with data from the file! Store the objects in a Linked List! 

#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string type;
	int wheels;
	int passengers;
	int cargolbs;
	string type2;
	string line;
	ifstream file("output.txt");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			if (line == type && type == "truck")
			{
				while (line != " ")
				{
					cout << type << ", wheels: " << wheels << ", passengers: " << passengers << ", cargo: " << cargolbs << endl;
				}				
			}

			if (line == type && line == "automobile")
			{
				while (line != " ")
				{
					cout << type << ", wheels: " << wheels << ", passengers: " << passengers << ", type: " << type2 << endl;
				}
			}
		}
		file.close();
	}

	else cout << "File failed to open";
	return 0;
}
