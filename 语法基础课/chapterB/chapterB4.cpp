#define _CRT_SECURE_NO_WARNINGS 1
//������
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    //�ж��Ƿ񹹳������Σ����������������
    if (A + B > C && A - B < C && B - A < C) {
        printf("Perimetro = %.1lf", A + B + C);
    }
    else {
        printf("Area = %.1lf", 0.5 * (A + B) * C);
    }
}