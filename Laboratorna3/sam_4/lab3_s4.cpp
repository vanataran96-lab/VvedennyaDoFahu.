#include <iostream>
using namespace std;
int main() {
    int by, cy; cout << "Birth year and current year: "; cin >> by >> cy;
    int age = cy - by;
    if (age < 0) cout << "Error" << endl;
    else if (age < 18) cout << "Nepovnolitniy" << endl;
    else if (age > 60) cout << "Pensioner" << endl;
    else cout << "Pracezdatniy vik" << endl;
    return 0;
}
