#include <iostream>
#include <iomanip>
#include "pancake.h"
#include "Utilities.h"

//A message to welcome users
void welcomeMessage()
{
	//Top sction line
	std::cout << std::setw(65) << std::setfill('*') << "*" << std::endl;

	//Message
	std::cout << "Welcome to the pancake generator program! Designed by Hamza Teli" << std::endl;
	std::cout << "If you're an avid pancake eater, you've come to the right place!" << std::endl;
	
	//Bottom section line
	std::cout << std::setw(65) << std::setfill('*') << "*" << std::endl;
}

//Prompt User to input number of pancakes
int promptUserInput()
{
	int numberOfPancakes = 0;
	std::cout << std::endl;
	std::cout << std::setw(65) << std::setfill('-') << "-" << std::endl;
	std::cout << "Please print the number of pancakes you want to make or 0 to quit: ";
	std::cin >> numberOfPancakes;

	//Check if input is valid
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

	return numberOfPancakes;
}
