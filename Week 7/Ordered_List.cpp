/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdio>
using namespace std;


class node
{
public:
	int data;
	node *next;
	node()
	{
		next = NULL;
	}
	
  void insert_number(int number);
	bool contains(int number);
	void print_in_order();
  void print_data();
  
};

void node::print_data()
{
		cout << data << endl;
		next->print_data();
	
}

void node::insert_number(int number)
{
		if (next == NULL)
		{
			next = new node;
			next->data = number;
		}
		else
		{
			if (next->data > number)
			{
				int x = next->data;
				next->data = number;
				next->insert_number(x);
			}
			else
			{
				next->insert_number(number);
			}
		}
		
}


bool node::contains(int number)
{
	if (data == number)
	{
		return true;
	}
	if (next != NULL)
	{
		return next->contains(number);
	}
	return false;
}

int main()

{
	node linked_list;
	linked_list.data = 0;
	cout << "Print nodes in order." << endl;
	linked_list.insert_number(10);
	linked_list.insert_number(6);
	linked_list.insert_number(98);
	linked_list.insert_number(33);
	linked_list.insert_number(55);
	linked_list.print_in_order();
	return 0;
}
