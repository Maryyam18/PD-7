#include <iostream>
using namespace std;

int main() {
    int numberOfDoctors = 7;
    int treatedPatients = 0;
    int untreatedPatients = 0;

    int visitedDays;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> visitedDays;

    for (int i = 1; i <= visitedDays; i++) {
        if (i % 3 == 0 && untreatedPatients > treatedPatients) {
            numberOfDoctors++; 
        }

        int numberOfPatients;
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> numberOfPatients;

        if (numberOfPatients <= numberOfDoctors) {
            treatedPatients += numberOfPatients;
        } else {
            treatedPatients += numberOfDoctors;
            untreatedPatients += numberOfPatients - numberOfDoctors;
        }
    }

    cout << "Treated patients: " << treatedPatients << endl;
    cout << "Untreated patients: " << untreatedPatients << endl;

    return 0;
}
