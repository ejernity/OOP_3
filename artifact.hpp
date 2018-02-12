#ifndef __ARTIFACT_HPP__
#define __ARTIFACT_HPP__

#include <iostream>
#include <string>

using namespace std;

class Artifact
{
	int index;
	string creator;
	int year;
public:
	// Constructor
	Artifact(const int&, const string&, const int&);

	// Destructor: needed just to print a message
	virtual ~Artifact();

	// Accessors
	void getIndex();
	virtual void getInfo();

	// Evaluate
	virtual int evaluate(const int&, const int&)=0;
	virtual int evaluate(const int&)=0;

};

#endif