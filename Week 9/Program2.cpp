//Populate the objects with data from the file! Store the objects in a Linked List!
//Having difficulty in regards to the output of the data. 

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

///Define Vehicle

class road_vehicle {
	string wheels;
	string passengers;
	string vehicle;
	string car;
public:
	void set_wheels(string num) {
		wheels = num;
	}
	string get_wheels() {
		return wheels;
	}
	void set_passengers(string num) {
		passengers = num;
	}
	string get_passengers() {
		return passengers;
	}
	void set_str(string str)
	{
		car = str;
	}

	string get_str()
	{
		return car;
	}
	void set_vtype(string str)
	{
		vehicle = str;
	}
	string get_vtype()
	{
		return vehicle;
	}
};

//Define a truck
class truck : public road_vehicle {
	string cargo;
public:
	void set_str(string size) {
		cargo = size;
	}
	string get_str() {
		return cargo;
	}
};


enum type { car, van, wagon };
class automobile : public road_vehicle {
	enum type car_type;
public:
	void set_str(type t) { car_type = t; }
	enum type get_str() { return car_type; }
};
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

int main(){

char str[255];
ifstream in;
in.open("test.txt");

  while(in) {
    in.getline(str, 255);  // delim defaults to '\n'
    cout << "LINE:*" << str << "*" << endl;
  } 
return 0;
}
