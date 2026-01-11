#include <iostream>
using namespace std;
int main() {
    double price; int cat;
    cout << "Cina: "; cin >> price;
    cout << "Kategoriya (1-zvich, 2-stud, 3-pens, 4-VIP): "; cin >> cat;
    switch(cat) {
        case 1: cout << "To pay: " << price << " (0% disc)" << endl; break;
        case 2: cout << "To pay: " << price * 0.95 << " (5% disc)" << endl; break;
        case 3: cout << "To pay: " << price * 0.90 << " (10% disc)" << endl; break;
        case 4: cout << "To pay: " << price * 0.85 << " (15% disc)" << endl; break;
        default: cout << "Pomilka" << endl;
    }
    return 0;
}
