/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
char  get_user_input();
void to_upper_case(char &letter);


int main() {
	char user_input_letter;
	cout << "Type in a letter grade, lowercase or uppercase." << endl;

	if ('0' != (user_input_letter = get_user_input())) {
		to_upper_case(user_input_letter);
		switch (user_input_letter) {

		case 'A': cout << "Super Great job on an A!" << endl; break;
		case 'B': cout << "Great job on a B!" << endl; break;
		case 'C': cout << "Good job on a C!" << endl; break;
		case 'D': cout << "Keep at it, you can get there." << endl; break;
		case 'F': cout << "F is for #fail" << endl; break;
		default: cout << "This is not a valid grade: " << user_input_letter << endl;

		}
	}
	cout << "You have entered 0.  Exiting." << endl;
}
char get_user_input()
{
	char letter;  
	cin >> letter;
	return letter;
}
void to_upper_case(char & letter)
{
	char user_input_letter;
	letter = toupper(letter);

	if (letter == 'A') 
	{
		user_input_letter == 'A';
	}
	if (letter == 'B')
	{
		user_input_letter == 'B';
	}
	if (letter == 'C')
	{
		user_input_letter == 'C';
	}
	if (letter == 'D')
	{
		user_input_letter == 'D';
	}
	if (letter == 'F')
	{
		user_input_letter == 'F';
	}
}

