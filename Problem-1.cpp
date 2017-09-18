/*
Names:
Kian Melhus
Elias Hutchinson
David Hovis
Date:
September 20, 2017
Description:
This program calculates the number of laps a jogger needs to run on a 1/14 of a mile track to meet the user entered mile amount.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int jogDistance;
	std::cout << "How many miles do you want to jog?" <<endl;
	std::cin >> jogDistance;
	std::cout <<"You need to jog "<<jogDistance*14 <<" laps." <<endl;
	return 0;
}
