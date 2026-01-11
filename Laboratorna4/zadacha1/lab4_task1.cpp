#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Vvedit nomer dnya tizhnya (1-7): ";
    cin >> day;

    switch (day) {
        case 1: cout << "Ponedilok" << endl; break;
        case 2: cout << "Vivtorok" << endl; break;
        case 3: cout << "Sereda" << endl; break;
        case 4: cout << "Chetver" << endl; break;
        case 5: cout << "P'yatnicya" << endl; break;
        case 6: cout << "Subota" << endl; break;
        case 7: cout << "Nedilya" << endl; break;
        default: cout << "Pomilka: takogo dnya ne isnuie!" << endl;
    }

    return 0;
}
