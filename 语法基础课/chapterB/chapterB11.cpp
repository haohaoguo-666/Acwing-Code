#define _CRT_SECURE_NO_WARNINGS 1
//三角形类型
#include <iostream>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;
    //选出最大值和最小值
    double max = (B > C ? B : C) > A ? (B > C ? B : C) : A;
    double min = (B < C ? B : C) < A ? (B < C ? B : C) : A;
    double mid = A + B + C - max - min;
    B = mid;
    C = min;
    A = max;
    //根据条件判断三角形类型
    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else {
        if (A * A == B * B + C * C) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (A * A > B * B + C * C) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (A * A < B * B + C * C) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && A == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        if ((A == B && A != C) || (A == C && A != B) || (B == C && A != B)) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
}