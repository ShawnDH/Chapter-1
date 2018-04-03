//Currency Exchange
//04/03/2018
//Author: ShawnD Herrick

#include <iostream>
#include <string>

int main()
{
	int americanDollars;
	double britishPounds = .71;
	double mexicanPesos = 18.19;
	double japaneseYen = 106.51;

	std::cout << "Number of American Dollars? \n >";
	std::cin >> americanDollars;

	std::cout << "British Pounds ***** " << americanDollars * britishPounds << "£" << std::endl;
	std::cout << "Mexican Pesos ***** " << mexicanPesos * americanDollars << "$" << std::endl;
	std::cout << "Japanese Yen ***** " << japaneseYen * americanDollars << "¥" << std::endl;

	system("pause");
	return 0;
}