//Delgados Tacos
//03/28/2018
//Author: ShawnD Herrick
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

int main()
{
	double tacos = 0.99;
	double burritos = 1.99;
	double enchiladas = 2.99;
	double tostadoas = 1.50;
	double drink = 0.99;
	double churro = 1.25;
	double supremeBurrito = 4.50;
	double potatoOllas = 1.99;
	double frEShAVacaDo = 9.99;
	double tax = 1.07;
	double total = 0;

	int tacosOrdered = 0;
	int burritosOrdered = 0;
	int enchiladasOrdered = 0;
	int tostadoasOrdered = 0;
	int drinkOrdered = 0;
	int churrosOrdered = 0;
	int supremeBurritosOrdered = 0;
	int potatoOllasOrdered = 0;
	int frEShAVacaDoOrdered = 0;
	int anythingElse = 0;
	int drinkCount = 0;
	std::string order;
	std::string drinkType;

	std::cout << "     ---Welcome To Delgados Tacos---    " << std::endl;
	std::cout << "   _________________________            " << std::endl;
	std::cout << "   T                       T            " << std::endl;
	std::cout << "   T    M-------------M    T            " << std::endl;
	std::cout << "   T    |     _       |    T            " << std::endl;
	std::cout << "   T    |    ( )      |    TTTTTTTTTT   " << std::endl;
	std::cout << "   T    |    /T/      |    T     |--|   " << std::endl;
	std::cout << "   T    MIIIIIIIIIIIIIM    T     |--|___" << std::endl;
	std::cout << "   T    OO                 T      OO   L" << std::endl;
	std::cout << "   T___O  O________________T_____O  O__|" << std::endl;
	std::cout << "        OO                        OO    " << std::endl;

	std::cout << "----------------------------Menu------------------------------" << std::endl;
	std::cout << "1. Taco ------- $0.99		5. Churro ----------- $1.25" << std::endl;
	std::cout << "2. Burrito ---- $1.99		6. Supreme Burrito -- $4.50" << std::endl;
	std::cout << "3. Enchilada -- $2.99		7. Potatos Ollas ---- $1.99" << std::endl;
	std::cout << "4. Tostadoas -- $1.50		8. Drinks ----------- $0.99" << std::endl;
	do{
		std::cout << "What would you like?" << std::endl;
		std::cin >> order;
		if (order == "Taco" || order == "taco" || order == "Tacos" || order == "tacos")
		{
			std::cout << ("How many Tacos would you like? \n >");
			std::cin >> tacosOrdered;
		}
		else if (order == "Burrito" || order == "Burritos" || order == "burritos" || order == "burrito")
		{
			std::cout << ("How many Burritos would you like? \n >");
			std::cin >> burritosOrdered;
		}
		else if (order == "Enchilada" || order == "enchilada" || order == "Enchiladas" || order == "enchiladas")
		{
			std::cout << ("How many Enchiladas would you like? \n >");
			std::cin >> enchiladasOrdered;
		}
		else if (order == "Tostadoa" || order == "tostadoa" || order == "tostadoas" || order == "Tostadoas")
		{
			std::cout << ("How many Tostadoas would you like? \n >");
			std::cin >> tostadoasOrdered;
		}
		else if (order == "Churro" || order == "Churros" || order == "churro" || order == "churros")
		{
			std::cout << ("How many Churro would you like? \n >");
			std::cin >> churrosOrdered;
		}
	    else if (order == "Supreme Burrito" || order == "supreme burrito" || order == "Supreme burrito" || order == "supreme Burrito")
		{
			std::cout << ("How many Supreme Burritos would you like? \n >");
			std::cin >> supremeBurritosOrdered;
		}
		else if (order == "Potato Ollas" || order == "potato ollas" || order == "Potato ollas" || order == "potato Ollas")
		{
			std::cout << ("How many Potato Ollas would you like? \n >");
			std::cin >> potatoOllasOrdered;
		}
		else if (order == "Drinks" || order == "drinks" || order == "Drink" || order == "drink")
		{
			std::cout << "------Drinks------" << std::endl;
			std::cout << "Pepsi ------ $0.99" << std::endl;
			std::cout << "Sprite ----- $0.99" << std::endl;
			std::cout << "Root Beer -- $0.99" << std::endl;
			std::cout << "How many drinks would you like? \n >";
			std::cin >> drinkOrdered;
			while (drinkOrdered - 1 != drinkCount)
			{
				std::cout << "What type of drink would you like for drink #" << drinkCount + 1 << std::endl;
				std::cin >> drinkType;
				drinkCount = drinkCount + 1;
			}
		}
		else
		{
			std::cout << "ERROR: Order not found." << std::endl;
		}
		std::cout << "Would you like to anything else? \n 1 for Yes  or   2 for No \n >";
		std::cin >> anythingElse;
		if (anythingElse != 1 | 2);
		{
			std::cout << "Sorry, I didn't get that. Please try again.\n Would you like to anything else? \n 1 for Yes  or   2 for No \n >";
			std::cin >> anythingElse;
		}
	} while (anythingElse != 2);

	total = ((tacos * tacosOrdered) + (burritos * burritosOrdered) + (enchiladas * enchiladasOrdered) + (tostadoas * tostadoasOrdered)
		+ (drink * drinkOrdered) + (churro * churrosOrdered) + (supremeBurrito * supremeBurritosOrdered) + (potatoOllas * potatoOllasOrdered) + (frEShAVacaDo * frEShAVacaDoOrdered)) * tax;
	std::cout << "Your total is ----- " << std::fixed << std::setprecision(2) << std::setfill('0') << total << std::endl;

	system("pause");
	return 0;

}