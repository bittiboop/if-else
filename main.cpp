#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "enter first number:" << endl;
	cin >> num1;
	cout << "enter second number:" << endl;
	cin >> num2;

	if (num1 == num2)
	{
		cout << "number 2 and number 1 is equal!\nyappy!" << endl;
	}
	else 
	{
		if (num1 > num2) {
			cout << num1 << "\n" << num2 << endl;
		}
		if (num1 < num2) {
			cout << num2 << "\n" << num1 << endl;
		}
	}
	return 0;
}