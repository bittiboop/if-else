#include <iostream>
using namespace std;

int main() {
	int num1;
	cin >> num1;
	int num2;
	cin >> num2;

	if (num1 > num2) {
		cout << "number two is less than first one" << endl;
	}
	else if (num2 > num1) {
		cout << "number one is less than second one" << endl;
	}
	else {
		cout << "they`re the same" << endl;
	}
	return 0;
}