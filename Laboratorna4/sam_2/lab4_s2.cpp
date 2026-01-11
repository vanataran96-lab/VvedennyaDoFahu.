#include <iostream>
using namespace std;
int main() {
    int op; double sum;
    cout << "1: UAH->USD, 2: UAH->EUR, 3: USD->UAH, 4: EUR->UAH\nOperaciya: ";
    cin >> op;
    cout << "Suma: "; cin >> sum;
    switch(op) {
        case 1: cout << sum / 41.5 << " USD" << endl; break;
        case 2: cout << sum / 44.0 << " EUR" << endl; break;
        case 3: cout << sum * 41.0 << " UAH" << endl; break;
        case 4: cout << sum * 43.5 << " UAH" << endl; break;
        default: cout << "Pomilka" << endl;
    }
    return 0;
}
