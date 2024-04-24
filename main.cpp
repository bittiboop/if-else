#include <iostream>
using namespace std;

int main() {
	int num1;
	cout << "Enter 7-digit number:" << endl;
	cin >> num1;

	if (num1 >= 1000000 && num1 <= 9999999)
	{
		int n1, n2, n3, n4, n5, n6, n7;
		
		n1 = (num1 % 10000000 - num1 % 1000000) / 1000000;
		n2 = (num1 % 1000000 - num1 % 100000) / 100000;
		n3 = (num1 % 100000 - num1 % 10000) / 10000;
		n4 = (num1 % 10000 - num1 % 1000) / 1000;
		n5 = (num1 % 1000 - num1 % 100) / 100;
		n6 = (num1 % 100 - num1 % 10) / 10;
		n7 = num1 % 10;

		int maxDigit = n1;
		if (n2 > maxDigit) maxDigit = n2;
		if (n3 > maxDigit) maxDigit = n3;
		if (n4 > maxDigit) maxDigit = n4;
		if (n5 > maxDigit) maxDigit = n5;
		if (n6 > maxDigit) maxDigit = n6;
		if (n7 > maxDigit) maxDigit = n7;
		cout << "the max number is: " << maxDigit << endl;
	}
	else {
		cout << "it`s not 7-digit number!" << endl;
	}
	return 0;
}