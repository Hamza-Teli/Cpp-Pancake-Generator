//All functions related to pancake generation
#include <iostream>
#include <iomanip>
#include "pancake.h"
#include "Utilities.h"

//The pancake generator function <-- Takes in an integer value for the number of pancakes user wants
// and prints the necessary ingredients
void pancakeGenerator(int numberOfPancakes)
{
	//Values to create one pancake <-- These are all in mL (millileters)
	int milk = 25;
	int egg = 1;
	int pancakeMix = 30;

	//Print the number of pancakes
	std::cout << "To create " << numberOfPancakes << " pancake(s), you need the following ingredients." << std::endl;
	std::cout << "Milk: " << (milk * numberOfPancakes) << "mL" <<  std::endl;
	std::cout << "Eggs: " << egg << std::endl;
	std::cout << "Pancake mix: " << (pancakeMix * numberOfPancakes) << "mL" << std::endl;
}
