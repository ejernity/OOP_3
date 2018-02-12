#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "artifact.hpp"
#include "masterpiece.hpp"
#include "painting.hpp"
#include "sculpture.hpp"

using namespace std;

void auction(Artifact**,const int&,const int&);

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		cout << "Please enter at least 2 arguments.\nOne for array size and one for movement value.\n";
		return -1;
	}

	int array_max_size = atoi(argv[1]);		// store array's size
	int my_movement;
	int my_condition = -1;		// default value if argc != 4

	if (argc >= 3)
	{	
		my_movement = atoi(argv[2]);
		if ((my_movement < 0) || (my_movement > 2))	// if user's input is not valid return
		{
			cout << "Wrong input. Please enter movement's value as an integer between 0 and 2 ([0,2])" << endl;
			return -2;
		}
	}

	if (argc > 3)
	{
		my_condition = atoi(argv[3]);
		if ((my_condition < 0) || (my_condition > 2))	// if user's input is not valid return
		{
			cout << "Wrong input. Please enter condition's value as an integer between 0 and 2 ([0,2])" << endl;
			return -3;
		}
	}

	srand(time(NULL));	// Start seed...

	Artifact** array = new Artifact*[array_max_size+1];

	for (int array_size = 0; array_size < array_max_size; array_size++)
	{	
		stringstream convert;
		convert << array_size+1;
		int is_painting = rand()%2;	// decide if we create painting or sculpture
		switch(is_painting)
		{
			case 0:
				array[array_size] = new Painting(array_size+1,"Creator"+convert.str(),rand()%2017+1);
				break;
			case 1:
				array[array_size] = new Sculpture(array_size+1,"Creator"+convert.str(),rand()%2017+1);
				break;
		}
	}
	array[array_max_size] = NULL;		// useful for auction to know when we reach the end of array
	cout << "*********************************" << endl;

	auction(array, my_movement, my_condition);

	for (int array_size = 0; array_size < array_max_size; array_size++)	// delete paintings and sculptures
		delete array[array_size];

	delete[] array;
	return 0;
}

// Function that uses printing-methods and evaluate for comparison between input and initial values
void auction(Artifact** my_array, const int& movement, const int& condition)
{
	int index = 0;
	while (my_array[index] != NULL)
	{
		my_array[index]->getIndex();
		my_array[index]->getInfo();
		if (condition == -1)
		{
			cout << "Evaluate: " << my_array[index]->evaluate(movement) << endl;
		} else
		{
			cout << "Evaluate: " << my_array[index]->evaluate(movement, condition) << endl;
		}
		cout << "*********************************" << endl;
		index++;
	}
}