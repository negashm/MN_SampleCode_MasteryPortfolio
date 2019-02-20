/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int year;

	for (;;)
	{
		cout << "Enter a year to determine if it is a leap year: ";
		cin >> year;

		if (year % 4 != 0)
		{
			cout << "This is not a leap year" << endl;
		}

		else if (year % 4 == 0 && year % 100 == 0 && year % 400 == 0)
		{
			cout << "This is a leap year" << endl;
		}

		else if (year % 100 != 0)
		{
			cout << "This is a leap year" << endl;
		}

		else if (year % 400 != 0)
		{
			cout << "This is not a leap year" << endl;
		}

		else if (year == 0)
		{
			break;
		}
	}
}
