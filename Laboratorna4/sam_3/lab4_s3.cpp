#include <iostream>
using namespace std;
int main() {
    int d;
    cout << "1-Nova Poshta, 2-Ukrposhta, 3-Meest, 4-GLS\nVibir: ";
    cin >> d;
    switch(d) {
        case 1: cout << "80 grn/kg, 1-2 dni" << endl; break;
        case 2: cout << "40 grn/kg, 3-7 dniv" << endl; break;
        case 3: cout << "50 grn/kg, 2-4 dni" << endl; break;
        case 4: cout << "150 grn/kg, 5-10 dniv" << endl; break;
        default: cout << "Nevirniy vibir" << endl;
    }
    return 0;
}
