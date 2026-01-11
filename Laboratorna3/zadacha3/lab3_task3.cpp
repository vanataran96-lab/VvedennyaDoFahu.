#include <iostream>
using namespace std;

int main() {
    double balance = 1000.0; // Potochniy balans
    double sum;
    cout << "Vash balans: " << balance << "\nVvedite sumu dlya znyattya: ";
    cin >> sum;

    if (sum <= 0) cout << "Pomilka: nekorrektna suma" << endl;
    else if (sum > balance) cout << "Nedostatnyo koshtiv" << endl;
    else cout << "Operaciya uspishna! Vi znyali: " << sum << endl;

    return 0;
}
