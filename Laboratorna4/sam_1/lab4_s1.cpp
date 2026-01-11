#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Menu:\n1-Espreso\n2-Amerikano\n3-Kapuchino\n4-Late\n5-Kakao\nVibir: ";
    cin >> choice;
    switch(choice) {
        case 1: cout << "Espreso - 30 grn" << endl; break;
        case 2: cout << "Amerikano - 35 grn" << endl; break;
        case 3: cout << "Kapuchino - 45 grn" << endl; break;
        case 4: cout << "Late - 50 grn" << endl; break;
        case 5: cout << "Kakao - 40 grn" << endl; break;
        default: cout << "Nema takogo napoyu" << endl;
    }
    return 0;
}
