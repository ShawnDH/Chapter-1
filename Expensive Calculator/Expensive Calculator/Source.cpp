//Expensive Calculator
//3/27/2018
//Author: ShawnD Herrick


#include <iostream>

int main()
{
	std::cout << "7 + 3 = " << 7 + 3 << std::endl;
	std::cout << "7 - 3 = " << 7 - 3 << std::endl;
	std::cout << "7 x 3 = " << 7 * 3 << std::endl;
	std::cout << "7 / 3 = " << 7 / 3 << std::endl;
	std::cout << "7.0 / 3.0 = " << 7.0 / 3.0 << std::endl;
	std::cout << "7 % 3 = " << 7 % 3 << std::endl;

	std::cout << "7 + 3 x 5 = " << 7 + 3 * 5 << std::endl;
	std::cout << "(7 + 3) x 5 = " << (7 + 3) * 5 << std::endl;

	system("Pause");
	return 0;

}