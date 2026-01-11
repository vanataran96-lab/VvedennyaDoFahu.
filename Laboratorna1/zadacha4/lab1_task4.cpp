#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    double salary;
    cout << "Vvedite vozrast: "; cin >> age;
    cout << "Vvedite zarplatu: "; cin >> salary;

    if (age > 20 && salary > 400 && salary < 1000) {
        string name, surname, pos;
        cout << "We will consider your position" << endl;
        cout << "Imya: "; cin >> name;
        cout << "Familiya: "; cin >> surname;
        cout << "Dolzhnost: "; cin >> pos;
        cout << "\nInfo: " << name << " " << surname << ", " << pos << ", Age: " << age << ", Salary: " << salary << endl;
    } else {
        cout << "You are not suitable" << endl;
    }
    return 0;
}
