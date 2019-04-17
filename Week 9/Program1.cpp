//Write a program to prompt the user for vehicle specifications. 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Define class for vehicles 

class road_vehicle
{
	int wheels;
	int passengers;
	string vehicle;
	string car;
  
public:
	void set_wheels(int num) {
		wheels = num;
	}
	int get_wheels() {
		return wheels;
	}
	void set_passengers(int num) {
		passengers = num;
	}
	int get_passengers() {
		return passengers;
	}
	void set_vtype(string str)
	{
		vehicle = str;
	}
	string get_vtype()
	{
		return vehicle;
	}

	void set_str(string str)
	{
		car = str;
	}

	string get_str()
	{
		return car;
	}
};

//Define truck
class truck : public road_vehicle {
	int cargo;
public:
	void set_cargo(int size) {
		cargo = size;
	}
	int get_cargo() {
		return cargo;
	}
};
//Define Automobile
enum type { car, van, wagon };
class automobile : public road_vehicle {
	enum type car_type;
public:
	void set_type(type t) { car_type = t; }
	enum type get_type() { return car_type; }
};

//Node linked list below 
class node
{
public:
	road_vehicle data;
	node *next;
	node()
	{
		next = NULL;
	}
	void insert(road_vehicle data);
	void print_data();
};

ostream &operator<<(ostream &stream, road_vehicle data)
{
	stream << data.get_vehicle() << endl;
	stream << data.get_wheels() << endl;
	stream << data.get_passengers() << endl;
	stream << data.get_str() << endl;
	return stream;
}

void node::print_data() {
	cout << data;

	if (next != NULL) { return next->print_data(); }
}
void node::insert(road_vehicle v) {
	if (next == NULL) {
		next = new node;
		next->data = v;
	}
	else {
		next->insert(v);
	}

}

int main() {
	ofstream out;
	out.open("output.txt");
	node linked_list;
	road_vehicle vehicle;
	string myvalue;
	bool c = true;
	int value;
	while (c)
	{
		cout << "Is this an automobile or a truck? Enter 'automobile' or 'truck'" << endl;
		getline(cin, myvalue);
		vehicle.set_vehicle(myvalue);
		if (myvalue == "truck")
		{
			cout << "How many wheels does this vehicle have?" << endl;
			cin >> value;
			vehicle.set_wheels(value);

			cout << "How many passengers can this vehicle hold?" << endl;
			cin >> value;
			vehicle.set_passengers(value);

			cout << "How much cargo (in pounds) can this vehicle hold?" << endl;
			cin >> value;
			string i = to_string(value);
			vehicle.set_str(i);
    }
   	else
  	{
			cout << "How many wheels does this vehicle have?" << endl;
			cin >> value;
			vehicle.set_wheels(value);

			cout << "How many passengers can this vehicle hold?" << endl;
			cin >> value;
			vehicle.set_passengers(value);

			cin.ignore();
			cout << "What type of automobile is this?   Enter van, car or wagon" << endl;
			getline(cin, myvalue);
			vehicle.set_str(myvalue);
		}
		out << vehicle;
		linked_list.insert(vehicle);

		cout << "Would you like to enter another vehicle? yes or no: ";
		cin >> exit;
		cout << endl;
		out << endl;
		if (exit == "yes")
		{
			continue;
		}
		else
		{
			break;
		}
	
	}

	linked_list.print_data();
  
  	else cout << "Unable to open";
	out.close();
	system("pause");
	return 0;
}









