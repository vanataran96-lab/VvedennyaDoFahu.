#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Vvedite ocenku (0-100): ";
    cin >> score;

    if (score >= 90 && score <= 100) cout << "Otlichno" << endl;
    else if (score >= 75) cout << "Horosho" << endl;
    else if (score >= 60) cout << "Udovletvoritelno" << endl;
    else if (score >= 0) cout << "Neudovletvoritelno" << endl;
    else cout << "Ошибка vvvoda" << endl;

    return 0;
}
