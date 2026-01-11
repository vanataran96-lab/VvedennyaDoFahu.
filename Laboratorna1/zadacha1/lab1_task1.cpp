#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Vvedite dva chisla: ";
    cin >> a >> b;
    cout << "Summa: " << a + b << ", Raznica: " << a - b << endl;
    cout << "Proizvedenie: " << a * b << ", Chastnoe: " << (b != 0 ? (double)a / b : 0) << endl;

    int length, width;
    cout << "\nVvedite dlinu i shirinu: ";
    cin >> length >> width;
    double area = (double)length * width;
    double perimeter = 2 * ((double)length + width);
    cout << "Ploshad: " << area << ", Perimetr: " << perimeter << endl;

    cout << "\nInfo o pamyati:\n";
    cout << "a: adress " << &a << ", razmer " << sizeof(a) << " byte" << endl;
    cout << "b: adress " << &b << ", razmer " << sizeof(b) << " byte" << endl;
    return 0;
}

