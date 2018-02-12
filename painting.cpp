#include <iostream>
#include <string>
#include <cstdlib>
#include "painting.hpp"

using namespace std;

// Constructor
Painting::Painting(const int& my_index, const string& my_creator, const int& my_year) : Masterpiece(my_index,my_creator,my_year),
																					    length(rand()%2000+1), width(rand()%1280+1),
																					    surface(length*width), technique((technique_type)(rand()%3))
{
	cout << "Creating an instance of painting" << endl;
}

// Destructor: needed just to print a message
Painting::~Painting()
{
	cout << "Destroying an instance of painting" << endl;
}

// Printing Lenght, Width, Surface, Technique
void Painting::getInfo()
{
	Masterpiece::getInfo();
	cout << "Length: " << length << endl
		 << "Width: " << width << endl
		 << "Surface: " << surface << endl;
	switch(technique)
	{
		case 0: cout << "Technique: oil" << endl; break;
		case 1: cout << "Technique: aquarelle" << endl; break;
		case 2: cout << "Technique: tempera" << endl; break;
	}
}

// Comparison
int Painting::evaluate(const int& my_movement, const int& my_condition)
{
	if ((my_movement == this->movement) && ((my_condition == this->condition) || (my_condition == 1 && this->condition == 2)))
		return 1;
	return 0;
}

// Needed for condition's default value
int Painting::evaluate(const int& my_movement)
{
	return evaluate(my_movement, 1);
}