#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	if(num > 0) {
		cout << "number is positive" << endl;
	}
	else if (num < 0) {
		cout << "number is negative" << endl;
	}
	else {
		cout << "number is equal to zero" << endl;
	}
	return 0;
}