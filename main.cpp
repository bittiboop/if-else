#include <iostream>
using namespace std;

int main() {
    double distance-AB, distance-BC;
    int weight;

    cout << "Введіть відстань між пунктами А і В: ";
    cin >> distance-AB;

    cout << "Введіть відстань між пунктами В і С: ";
    cin >> distance-BC;

    cout << "Enter the weight of the cargo: ";
    cin >> weight;

    int fuel-consumption;
    if (weight <= 500) {
        fuel-consumption = 1;
    } else if (weight <= 1000) {
        fuel-consumption = 4;
    } else if (weight <= 1500) {
        fuel-consumption = 7;
    } else if (weight <= 2000) {
        fuel-consumption = 9;
    } else {
        cout << "The plane does not lift a load of more than 2000 kg" << endl;
        return 0;
    }

    double fuel-needed-AB = distance-AB * fuel-consumption;
    double fuel-needed-BC = distance-BC * fuel-consumption;
    if (fuel-needed-AB > 300) {
        cout << "It`s impossible to overcome the distance between points A and B" << endl;
        return 0;
    }
    if (fuel-needed-BC > 300) {
        cout << "It`s impossible to overcome the distance between points B and C" << endl;
        return 0;
    }
    double total-fuel-needed = fuel-needed-AB + fuel-needed-BC;
    double refill-needed = total-fuel-needed - 300;
    if (refill-needed < 0) {
        refill-needed = 0;
    }

    cout << "The required amount of fuel for refueling at point B: " << refill-needed << " liters " << endl;

    return 0;
}
