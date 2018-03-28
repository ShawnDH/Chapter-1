//MyMadLibs
//03/28/2018
//Author: ShawnD Herrick

#include <iostream>
#include <string>


int main()
{
	//These are declaring the variables
	std::string name;
	std::string time;
	std::string liquidDrink;
	std::string carType;
	std::string pluralNoun;
	int aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser;
	int cThirdNumberChosenByUser;
	int dFourthNumberChosenByUser;
	int eTheResultOfATimesBPlusCDividedByD;

	//This is where the user will input the variables to the madlib
	std::cout << "Welcome to my Mad Libs. \n\n";
	std::cout << "Enter your name \n >";
	std::cin >> name;
	std::cout << "Enter a time with AM \n >";
	std::cin >> time;
	std::cout << "Enter your favorite drink \n >";
	std::cin >> liquidDrink;
	std::cout << "Enter your favorite car type \n >";
	std::cin >> carType;
	std::cout << "Enter a plural noun \n >";
	std::cin >> pluralNoun;
	std::cout << "Enter a number \n >";
	std::cin >> aFirstNumberChosenByUser;
	std::cout << "Enter a second number \n >";
	std::cin >> bSecondNumberChosenByUser;
	std::cout << "Enter a third number \n >";
	std::cin >> cThirdNumberChosenByUser;
	std::cout << "Enter a forth number \n >";
	std::cin >> dFourthNumberChosenByUser;

	//This is kind of like the Expensive calculator
	eTheResultOfATimesBPlusCDividedByD = (aFirstNumberChosenByUser * bSecondNumberChosenByUser) + (cThirdNumberChosenByUser / dFourthNumberChosenByUser);

	//this is where the the user's inputs and and story come together
	std::cout << name << " woke up at " << time << " and drank a liter of " << liquidDrink << ". They drove to school in their " << carType << " with "
		<< eTheResultOfATimesBPlusCDividedByD << pluralNoun << " in their car. They love " << pluralNoun << "." << std::endl;

	//this ends the program
	system("pause");
	return 0;
}