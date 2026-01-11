#include <iostream>
using namespace std;
int main() {
    int mark; cout << "Ocinite (1-5): "; cin >> mark;
    switch(mark) {
        case 1: cout << "Duzhe pogano" << endl; break;
        case 2: cout << "Pogano" << endl; break;
        case 3: cout << "Zadovilno" << endl; break;
        case 4: cout << "Dobre" << endl; break;
        case 5: cout << "Vidminno" << endl; break;
        default: cout << "Nevirna ocinka" << endl;
    }
    return 0;
}
