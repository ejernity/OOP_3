#include <iostream>
#include <string>
#include <cstdlib>
#include "masterpiece.hpp"

using namespace std;

// Constructor
Masterpiece::Masterpiece(const int& my_index, const string& my_creator, const int& my_year) : Artifact(my_index,my_creator,my_year), movement((movement_type)(rand()%3)), condition((condition_type)(rand()%3))
{
	cout << "Creating an instance of masterpiece" << endl;
}

// Destructor: needed just to print a message
Masterpiece::~Masterpiece()
{
	cout << "Destroying an instance of masterpiece" << endl;
}

// Printing movement, condition
void Masterpiece::getInfo()
{
	Artifact::getInfo();
	switch (movement)
	{
		case 0: cout << "Movement: impressionism" << endl; break;
		case 1: cout << "Movement: expressionism" << endl; break;
		case 2: cout << "Movement: naturalism" << endl; break;
	}
	switch (condition)
	{
		case 0: cout << "Condition: bad" << endl; break;
		case 1: cout << "Condition: good" << endl; break;
		case 2: cout << "Condition: excellent" << endl; break;
	}
}