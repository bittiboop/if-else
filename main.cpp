#include <iostream>
using namespace std;

int main() {
	int num1;
	cout << "Enter 4-digit number:" << endl;
	cin >> num1;

	if (num1 >= 1000 && num1 <= 9999)
	{
		int n1, n2, n3, n4;
		n1 = (num1 % 10000 - num1 % 1000) / 1000;
		n2 = (num1 % 1000 - num1 % 100) / 100;
		n3 = (num1 % 100 - num1 % 10) / 10;
		n4 = num1 % 10;
		cout << "The result is:\n" << n2 << n1 << n4 << n3 << endl;
	}
	else {
		cout << "it`s not 4-digit number!" << endl;
	}
	return 0;
}