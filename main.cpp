#include <iostream>
#include <iomanip>
#include "pancake.h"
#include "Utilities.h"

int main() {

	//Print Welcome Message
	welcomeMessage();

	//Prompt user to enter number of pancakes
	int numberOfPancakes = 1;

	//Put in a for loop to keep asking user
	while (numberOfPancakes > 0)
	{
		std::cout << std::endl;
		std::cout << std::setw(65) << std::setfill('-') << "-" << std::endl;
		std::cout << "Please print the number of pancakes you want to make or 0 to quit: ";
		std::cin >> numberOfPancakes;
		while (!std::cin)
		{
			std::cout << "Wrong input! Please enter a constant number! " << std::endl << std::endl;
			std::cout << "Please print the number of pancakes you want to make: ";
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			std::cin >> numberOfPancakes;
			
		}
		if (numberOfPancakes > 0)
		{
			pancakeGenerator(numberOfPancakes);
		}
		else
		{
			std::cout << "Thank you for using the program. Hope it helped you!" << std::endl;
		}
		std::cout << std::setw(65) << std::setfill('-') << "-" << std::endl;
	}
	
	return 0;
}