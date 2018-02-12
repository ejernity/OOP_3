#ifndef __MASTERPIECE_HPP__
#define __MASTERPIECE_HPP__

#include <iostream>
#include <string>
#include "artifact.hpp"

using namespace std;

enum movement_type
{
	impressionism,
	expressionism,
	naturalism
};

enum condition_type
{
	bad,
	good,
	excellent
};

class Masterpiece : public Artifact
{
protected:
	movement_type movement;
	condition_type condition;
public:
	// Constructor
	Masterpiece(const int&, const string&, const int&);

	// Destructor: needed just to print a message
	~Masterpiece();

	// Accessor
	void getInfo();

	// Evaluate
	virtual int evaluate(const int&, const int&)=0;
	virtual int evaluate(const int&)=0;

};

#endif