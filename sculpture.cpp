#include <iostream>
#include <string>
#include <cstdlib>
#include "sculpture.hpp"

using namespace std;

// Constructor
Sculpture::Sculpture(const int& my_index, const string& my_creator, const int& my_year) : Masterpiece(my_index,my_creator,my_year), volume(rand()%500+1), material((material_type)(rand()%3))
{
	cout << "Creating an instance of sculpture" << endl;
}

// Destructor: needed just to print a message
Sculpture::~Sculpture()
{
	cout << "Destroying an instance of sculpture" << endl;
}

// Printing Volume, Material
void Sculpture::getInfo()
{
	Masterpiece::getInfo();
	cout << "Volume: " << volume << endl;
	switch(material)
	{
		case 0: cout << "Material: iron" << endl; break;
		case 1: cout << "Material: stone" << endl; break;
		case 2: cout << "Material: wood" << endl; break;
	}
}

// Comparison
int Sculpture::evaluate(const int& my_movement, const int& my_condition)
{
	if ((my_movement == this->movement) && (my_condition == this->condition))
		return 1;
	return 0;
}

// Needed for condition's default value
int Sculpture::evaluate(const int& my_movement)
{
	return evaluate(my_movement, 2);
}