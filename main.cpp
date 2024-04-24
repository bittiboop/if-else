#include <iostream>
using namespace std;

int main() {
	int planeBC, planeAB, cargoPlane;
	int fuelPlane = 300;

	cout << "Enter distance between point A and point B(km): ";
	cin >> planeAB;
	cout << "Enter distance between point B and point C(km): ";
	cin >> planeBC;
	cout << "Enter cargo weight in plane(kg): ";
	cin >> cargoPlane;

	if (cargoPlane > 2000)
	{
		cout << "The transportation is impossible, too much weight" << endl;
	}
	else {
		
	}
	return 0;
}