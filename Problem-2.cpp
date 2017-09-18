/*
Names:
Kian Melhus
Elias Hutchinson
David Hovis
Date:
September 20, 2017
Description:
This program calculates the surface area and volume of a box from user entered dimensions.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int boxLength;
	int boxWidth;
	int boxHeight;
	std::cout << "Enter box length (inches):" <<endl;
	std::cin >> boxLength;
	std::cout << "Enter box width (inches):" <<endl;
	std::cin >> boxWidth;
	std::cout << "Enter box height (inches):" <<endl;
	std::cin >> boxHeight;
	std::cout <<"Box surface area= "<<2*(boxLength*boxWidth+boxLength*boxHeight+boxWidth*boxHeight) <<" square inches" <<endl;
	std::cout <<"Box volume= "<<2*(boxLength*boxWidth*boxHeight) <<" cubic inches" <<endl;
	return 0;
}
