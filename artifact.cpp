#include <iostream>
#include <string>
#include "artifact.hpp"

using namespace std;

// Constructor
Artifact::Artifact(const int& my_index, const string& my_creator, const int& my_year) : index(my_index), creator(my_creator), year(my_year)
{
	cout << "Creating an instance of artifact" << endl;
}

// Destructor: needed just to print a message
Artifact::~Artifact()
{
	cout << "Destroying an instance of artifact" << endl;
}

// Printing creator, year
void Artifact::getInfo()
{
	cout << "Creator: " << creator << endl
		 << "Year: " << year << endl;
}

// Printing index
void Artifact::getIndex()
{
	cout << "Index: " << index << endl;
}