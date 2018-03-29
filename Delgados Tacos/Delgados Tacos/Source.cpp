//Delgados Tacos
//03/28/2018
//Author: ShawnD Herrick


#include <iostream>
#include <string>
#include <iomanip>

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
	double total;

	int tacosOrdered;
	int burritosOrdered;
	int enchiladasOrdered;
	int tostadoasOrdered;
	int drinkOrdered;
	int churrosOrdered;
	int supremeBurritosOrdered;
	int potatoOllasOrdered;
	int frEShAVacaDoOrdered;

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

	std::cout << "How many Tacos would you like? \n >";
	std::cin >> tacosOrdered;
	std::cout << "How many burritos would you like? \n >";
	std::cin >> burritosOrdered;
	std::cout << "How many enchilads would you like? \n >";
	std::cin >> enchiladasOrdered;
	std::cout << "How many tostadoas would you like? \n >";
	std::cin >> tostadoasOrdered;
	std::cout << "How many drinks would you like? \n >";
	std::cin >> drinkOrdered;
	std::cout << "How many churros would you like? \n >";
	std::cin >> churrosOrdered;
	std::cout << "How many supreme burritos would you like? \n >";
	std::cin >> supremeBurritosOrdered;
	std::cout << "How many potato ollas would you like? \n >";
	std::cin >> potatoOllasOrdered;
	std::cout << "How many FrESheVacadoS would you like? \n >";
	std::cin >> frEShAVacaDoOrdered;

	total = ((tacos * tacosOrdered) + (burritos * burritosOrdered) + (enchiladas * enchiladasOrdered) + (tostadoas * tostadoasOrdered)
		+ (drink * drinkOrdered) + (churro * churrosOrdered) + (supremeBurrito * supremeBurritosOrdered) + (potatoOllas * potatoOllasOrdered) + (frEShAVacaDo * frEShAVacaDoOrdered)) * tax;
	std::cout << "Your total is ----- " << std::fixed << std::setprecision(2) << std::setfill('0') << total << std::endl;

	//std::cout << "What would you like?" << std::endl;
	
	system("pause");
	return 0;

}