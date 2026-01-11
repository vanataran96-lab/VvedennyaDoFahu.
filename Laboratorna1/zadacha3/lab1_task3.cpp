#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Vvedite X: ";
    cin >> x;

    int tempX = x;
    cout << "Do incrementacii: " << tempX << endl;
    cout << "Prefix (++X): " << ++tempX << endl;
    tempX = x;
    cout << "Postfix (X++): " << tempX++ << " (posle: " << tempX << ")" << endl;

    tempX = x;
    cout << "\nDo decrementacii: " << tempX << endl;
    cout << "Prefix (--X): " << --tempX << endl;
    tempX = x;
    cout << "Postfix (X--): " << tempX-- << " (posle: " << tempX << ")" << endl;

    tempX = x;
    int y1 = 10 + ++tempX;
    cout << "\nY = 10 + ++X: Y=" << y1 << ", X=" << tempX << endl;

    tempX = x;
    int y2 = 10 + tempX++;
    cout << "Y = 10 + X++: Y=" << y2 << ", X=" << tempX << endl;

    return 0;
}
