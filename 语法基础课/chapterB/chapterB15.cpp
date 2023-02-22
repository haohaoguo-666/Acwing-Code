#define _CRT_SECURE_NO_WARNINGS 1
//一元二次方程公式
#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c < 0 || a == 0) {
        cout << "Impossivel calcular" << endl;
    }
    else {
        printf("R1 = %.5lf\n", (-b + sqrt(b * b - 4 * a * c)) / (2 * a));
        printf("R2 = %.5lf", (-b - sqrt(b * b - 4 * a * c)) / (2 * a));
    }

}