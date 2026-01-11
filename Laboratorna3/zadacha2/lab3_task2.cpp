#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Vvedite vash vik: ";
    cin >> age;

    if (age < 13) cout << "Dostup zaboroneno" << endl;
    else if (age >= 13 && age <= 17) cout << "Dostup z batkivskim kontrolem" << endl;
    else cout << "Povniy dostup" << endl;

    return 0;
}
