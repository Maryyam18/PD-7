#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float totalWeight = 0;
    float totalCost = 0;
    float minibusWeight = 0;
    float truckWeight = 0;
    float trainWeight = 0;

    int cargoCount;

    cout << "Enter the count of cargo for transportation: ";
    cin >> cargoCount;

    for (int i = 0; i < cargoCount; ++i) {
        float weight;
        cout << "Enter the tonnage of cargo " << (i + 1)<<": ";
        cin >> weight;
        totalWeight += weight;

        if (weight <= 3) {
            totalCost += weight * 200;
            minibusWeight += weight;
        } else if (weight <= 11) {
            totalCost += weight * 175;
            truckWeight += weight;
        } else {
            totalCost += weight * 120;
            trainWeight += weight;
        }
    }

    cout << fixed << setprecision(2) << (totalCost / totalWeight) << endl;
    cout << fixed << setprecision(2) << (minibusWeight / totalWeight) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (truckWeight / totalWeight) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (trainWeight / totalWeight) * 100 << "%";

    return 0;
}
