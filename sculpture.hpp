#ifndef __SCULPTURE_HPP__
#define __SCULPTURE_HPP__

#include <iostream>
#include <string>
#include "masterpiece.hpp"

using namespace std;

enum material_type
{
	iron,
	stone,
	wood
};

class Sculpture : public Masterpiece
{
	int volume;
	material_type material;
public:
	// Constructor
	Sculpture(const int&, const string&, const int&);

	// Destructor: jus to print a message
	~Sculpture();

	// Accessor
	void getInfo();

	// Evaluate
	int evaluate(const int&, const int&);
	int evaluate(const int&);
};

#endif