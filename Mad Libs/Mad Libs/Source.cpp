//MadLibs
//03/27/2018
//Author: ShawnD Herrick

#include <iostream>
#include <string>


int main()
{
	//These are declaring the variables
	std::string color;
	std::string wordEst;
	std::string bodyPartPlural;
	std::string animal;
	std::string noun;
	std::string pluralNoun;

	//This is kind of like the Expensive calculator
	int aFirstNumberChosenByUser = 4;
	int bSecondNumberChosenByUser = 3;
	int cTheResultOfAMinusB;
	cTheResultOfAMinusB = aFirstNumberChosenByUser - bSecondNumberChosenByUser;
	
	//This is where the user will input the variables to the madlib
	std::cout << "Welcome to my Mad Libs. \n\n";
	std::cout << "Enter your favorite color >>>" << std::endl;
	std::cin >> color;
	std::cout << "Enter a word ending in EST >>>" << std::endl;
	std::cin >> wordEst; 
	std::cout << "Enter a body part plural >>>" << std::endl;
	std::cin >> bodyPartPlural;
	std::cout << "Enter an animal >>>" << std::endl;
	std::cin >> animal;
	std::cout << "Enter a noun >>>" << std::endl;
	std::cin >> noun;
	std::cout << "Enter a plural noun >>>" << std::endl;
	std::cin >> pluralNoun;
	std::cout << "Enter a number >>>" << std::endl;
	std::cin >> aFirstNumberChosenByUser;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> bSecondNumberChosenByUser;

	//this is where the the user's inputs and and story come together
	std::cout << "The " << color << " dragon is the " << wordEst << " dragon of all. It has " << cTheResultOfAMinusB << std::endl;
	std::cout << cTheResultOfAMinusB << bodyPartPlural << ", and a " << animal << " shaped like a " << noun << ". It loves to eat " << 
		pluralNoun << ", although it will feast on nearly anything." << std::endl;

	//this ends the program
	system("pause");
	return 0;
}