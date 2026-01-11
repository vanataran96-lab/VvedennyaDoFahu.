#include <iostream>
using namespace std;
int main() {
    int t; cout << "Temp: "; cin >> t;
    if (t < 0) cout << "Moroz" << endl;
    else if (t <= 20) cout << "Proholodno" << endl;
    else cout << "Teplo" << endl;
    return 0;
}
