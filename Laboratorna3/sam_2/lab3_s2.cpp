#include <iostream>
using namespace std;
int main() {
    int age; cout << "Age: "; cin >> age;
    cout << (age < 18 ? "Nepovnolitniy" : "Povnolitniy") << endl;
    return 0;
}
