/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	int count = 0;
	int num;

	for (;;)
	{
		cout << "Please enter a number to find out if it is prime" << endl;
		cin >> num;

		if (num == 0)
		{
			break;
		}
		else
		{
			for (i = 2; i < num; i++)
				if (num % i == 0)
					count++;
		}
		if (count > 1)
		{
			cout << "This is not a prime number" << endl;
		}
		else
		{
			cout << "This is a prime number" << endl;
		
		}
		cout << "" << endl;
	}

}
