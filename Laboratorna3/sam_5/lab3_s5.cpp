#include <iostream>
using namespace std;
int main() {
    double pr, count, disc; cout << "Price, count, discount %: "; cin >> pr >> count >> disc;
    double total = pr * count;
    if (total > 1000) total -= total * (disc / 100);
    cout << "To pay: " << total << endl;
    return 0;
}
