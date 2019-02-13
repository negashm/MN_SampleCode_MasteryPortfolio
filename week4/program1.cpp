#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float num[10];
	int i;
	float total = 0;
	float newTotal = 0;
	for (i = 0; i < 10; i++)
	{
		cout << "\nPlease enter an integer value: ";
		cin >> num[i];
		total = total + num[i];
		num[i] = sqrt(num[i] - (total / 10));
		newTotal = newTotal + num[i];
	}
	
	std::cout << "\nThe new mean is: " << newTotal / 10;
	std::cout << "\nThe square root of the mean is: " << sqrt(newTotal / 10);

	return 0;
}
