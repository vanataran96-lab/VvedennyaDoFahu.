#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Vvedite temperaturu: ";
    cin >> temp;

    if (temp <= 0) cout << "Beremo tepliy odyag ta rukavichki" << endl;
    else if (temp >= 1 && temp <= 15) cout << "Vizmit legku kurtku" << endl;
    else if (temp >= 16 && temp <= 25) cout << "Mozhna odyagati futbolku" << endl;
    else cout << "Legkiy odyag, soncezahisni okulyari" << endl;

    return 0;
}
