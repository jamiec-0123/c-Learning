#include "pch.h"
#include <iostream>
#include <string>
#include <cstdlib>
int main()
{
	bool error = false, correctGuess = false;
	int wholeNumber; 
	int randomNumber = rand()%25+1;
	std::string test;
	do {
		std::cout << "Enter in a number between 1 to 25 \n";
		std::cin >> test;
		do {
			try
			{
				wholeNumber = std::stoi(test);
				error = false;
			}
			catch (int errorNum)
			{
				std::cout << "Error you haven't enter a whole number please enter again \n";
				error = true;
			}
		}

		while (error != false);
		if (wholeNumber > randomNumber) 
		{
			std::cout << "Too big \n";
		}
		else if(wholeNumber < randomNumber)
		{
			std::cout << "Too small \n";
		}
		else
		{
			correctGuess = true;
		}
	} 
	while (correctGuess == false);
	std::cout << "You've won!";
}
