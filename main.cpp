#include <iostream>
using namespace std;

int main() {
	int num1;
	cin >> num1;

	if (num1 >= 100000 && num1 <= 999999)
	{
		int n1, n2, n3, n4, n5, n6;
		n1 = (num1 % 1000000 - num1 % 100000) / 100000;
		n2 = (num1 % 100000 - num1 % 10000) / 10000;
		n3 = (num1 % 10000 - num1 % 1000) / 1000;
		n4 = (num1 % 1000 - num1 % 100) / 100;
		n5 = (num1 % 100 - num1 % 10) / 10;
		n6 = num1 % 10;
		if (n1 + n2 + n3 == n4 + n5 + n6)
		{
			cout << "YAY!\n its lucky number!" << endl;
		}
		else {
			cout << "It`s not lucky number :(" << endl;
		}
	}
	else {
		cout << "it`s not 6-digit number!" << endl;
	}
	return 0;
}