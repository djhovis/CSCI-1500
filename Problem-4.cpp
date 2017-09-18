/*
Names:
Kian Melhus
Elias Hutchinson
David Hovis
Date:
September 20, 2017
Description:
This program converts the user entered number of feet to other units of distance.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	float feet;
	float yards;
	float inches;
	float centimeters;
	float meters;
	std::cout << "Enter number of feet to convert:" <<endl;
	std::cin >> feet;
	yards= feet/3;
	inches= feet*12;
	centimeters= feet*30.48;
	meters= feet*0.3048;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	std::cout <<yards <<" yards\n" <<inches <<" inches\n" <<centimeters <<" centimeters\n" <<meters <<" meters" <<endl;
	return 0;
}
