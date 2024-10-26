// File Name: Ch4Ex15.cpp
// Programmer: Katlyn Winkelhake
// Date: 10/26/2024
// Requirements: Write a program that asks for the weight and distance shipped and display the charges.

#include <iostream>
#include <iomanip>
using namespace std;

void ShippingWeight();
void ShippingCost(double totalCost);
double shipCharge;
double totalCost;

const int milesMin = 0;
const int milesMax = 3000;

int main()
{
	ShippingWeight();
	
}

void ShippingWeight() {

	double packWeight;
	double miles;
	

	cout << "What is the weight of the package? (in kg)" << endl;
	cin >> packWeight;

	cout << "How many miles are you shipping?" << endl;
	cin >> miles;

	if (miles < milesMin && miles > milesMax)
		cout << "You cannot ship this distance." << endl;

	else if (packWeight <= 2) {
		shipCharge = 1.10;
		totalCost = (miles / 500) * 1.10;
		ShippingCost(totalCost);
	}
	else if (packWeight > 2 && packWeight <= 6) {
		shipCharge = 2.20;
		totalCost = (miles / 500) * 2.20;
		ShippingCost(totalCost);
	}
	else if (packWeight > 6 && packWeight <= 10) {
		shipCharge = 3.70;
		totalCost = (miles / 500) * 3.70;
		ShippingCost(totalCost);
	}
	else if (packWeight > 10 && packWeight <= 20) {
		shipCharge = 4.80;
		totalCost = (miles / 500) * 4.80;
		ShippingCost(totalCost);
	}
	else
		cout << "This information is not accepted. Check shipping requirements." << endl;

}

void ShippingCost(double totalCost) {

	cout << fixed << setprecision(2);
	cout << "Your total shipping cost is: $" << totalCost << endl;

}