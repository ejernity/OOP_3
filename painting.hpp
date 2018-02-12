#ifndef __PAINTING_HPP__
#define __PAINTING_HPP__

#include <iostream>
#include <string>
#include "masterpiece.hpp"

using namespace std;

enum technique_type
{
	oil,
	aquarelle,
	tempera
};

class Painting : public Masterpiece
{
	int length;
	int width;
	int surface;
	technique_type technique;
public:
	// Constructor
	Painting(const int&, const string&, const int&);

	// Destructor: needed just to print a message
	~Painting();

	// Accessor
	void getInfo();

	// Comparison
	int evaluate(const int&, const int&);
	int evaluate(const int&);
};

#endif