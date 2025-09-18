// Lab_02.cpp
// Папуша Вадим
// Лабораторна робота № 2.0
// Лінійні програми.
// Варіант 18
using namespace std;
#include <iostream>
#include <cmath>

int main()
{
    double a;

    cout << "a = "; cin >> a;

    double z1 = ((a + 2) / sqrt(2 * a)
                - a / (sqrt(2 * a) + 2)
                + 2 / (a - sqrt(2 * a)))
                * (sqrt(a) - sqrt(2)) / (a + 2);

    double z2 = 1 / (sqrt(a) + sqrt(2));
    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    return 0;
}
