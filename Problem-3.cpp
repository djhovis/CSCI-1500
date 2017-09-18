/*
Names:
Kian Melhus
Elias Hutchinson
David Hovis
Date:
September 20, 2017
Description:
This program calculates the dollar and change total from user entered numbers of coins.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int quarters;
	int dimes;
	int nickels;
	int pennies;
	float coinTotal;
	std::cout << "Enter number of quarters:" <<endl;
	std::cin >> quarters;
	std::cout << "Enter number of dimes:" <<endl;
	std::cin >> dimes;
	std::cout << "Enter number of nickels:" <<endl;
	std::cin >> nickels;
	std::cout << "Enter number of pennies:" <<endl;
	std::cin >> pennies;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	coinTotal=quarters*.25+dimes*.1+nickels*.05+pennies*.01;
	std::cout <<quarters <<" quarters, " <<dimes <<" dimes, " <<nickels <<" nickels, and " <<pennies <<" pennies" <<" = $" <<coinTotal <<endl;
	return 0;
}
