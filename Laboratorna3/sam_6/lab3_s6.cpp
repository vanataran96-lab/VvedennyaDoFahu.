#include <iostream>
using namespace std;
int main() {
    double t; cout << "Body temp: "; cin >> t;
    if (t < 35.0) cout << "Gipotermiya" << endl;
    else if (t <= 37.0) cout << "Norma" << endl;
    else if (t <= 38.0) cout << "Subfebrilna" << endl;
    else cout << "Lihomanka" << endl;
    return 0;
}
