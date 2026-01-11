#include <iostream>
using namespace std;
int main() {
    int t; cout << "Water temp: "; cin >> t;
    if (t < 0) cout << "Lid" << endl;
    else if (t <= 100) cout << "Voda" << endl;
    else cout << "Para" << endl;
    return 0;
}
