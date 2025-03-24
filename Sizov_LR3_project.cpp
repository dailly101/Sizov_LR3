#include <iostream>
using namespace std;
void Existence(double a, double b, double c) {
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Треугольник существует." << endl;
    }
    else {
        cout << "Треугольник не существует." << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Введите длину стороны A: ";
    cin >> a;
    cout << "Введите длину стороны B: ";
    cin >> b;
    cout << "Введите длину стороны C: ";
    cin >> c;
    return 0;
}