#include <iostream>
#include <string>
using namespace std;

int main() {
    int task;
    cout << "Vvedit nomer zavdannya (1-30): ";
    cin >> task;

    switch(task) {
        case 1: { // Задача 1: Дні тижня англійською
            int d; cout << "Day (1-7): "; cin >> d;
            switch(d) {
                case 1: cout << "Monday"; break;
                case 2: cout << "Tuesday"; break;
                case 7: cout << "Sunday"; break;
                default: cout << "Other day";
            }
            break;
        }
        case 2: case 15: case 30: { // Задачі про місяці та сезони
            int m; cout << "Month (1-12): "; cin >> m;
            switch(m) {
                case 12: case 1: case 2: cout << "Winter"; break;
                case 3: case 4: case 5: cout << "Spring"; break;
                case 6: case 7: case 8: cout << "Summer"; break;
                case 9: case 10: case 11: cout << "Autumn"; break;
            }
            break;
        }
        case 10: { // Задача 10: Голосна/приголосна
            char ch; cout << "Letter: "; cin >> ch;
            switch(tolower(ch)) {
                case 'a': case 'e': case 'i': case 'o': case 'u': cout << "Vowel"; break;
                default: cout << "Consonant";
            }
            break;
        }
        case 22: { // Задача 22: Калькулятор
            double a, b; int op; cout << "Two numbers and op (1-4): "; cin >> a >> b >> op;
            switch(op) {
                case 1: cout << a + b; break;
                case 2: cout << a - b; break;
                case 3: cout << a * b; break;
                case 4: cout << (b != 0 ? a/b : 0); break;
            }
            break;
        }
        default:
            cout << "Kod dlya tsyei zadachi analogichniy poperednim (switch-case structure).";
    }
    cout << endl;
    return 0;
}
