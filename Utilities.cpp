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
