#include <iostream>
using namespace std;
int main() {
    int score; cout << "Score (0-200): "; cin >> score;
    if (score >= 170) cout << "Rekomendovano na budget" << endl;
    else if (score >= 140) cout << "Mozhliviy vstup na kontrakt" << endl;
    else cout << "Ne prohodit porig" << endl;
    return 0;
}
