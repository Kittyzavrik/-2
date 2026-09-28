#include <iostream>
#include <cmath>

using namespace std;

//спрашиваем число и возвращаем его
double vvod(string text) {
    double x;
    cout << text;
    cin >> x;
    return x;
}

// формула пифагора 
double gipotenuza(double a, double b) {
    return sqrt(a*a + b*b);
}

// печатаем ответ
void pechat(double c) {
    cout << "Гипотенуза = " << c << endl;
}

int main() {
    double a = vvod("Введи первый катет: ");
    double b = vvod("Введи второй катет: ");

    double c = gipotenuza(a, b);

    pechat(c);

    return 0;
}