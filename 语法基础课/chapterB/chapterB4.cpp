#define _CRT_SECURE_NO_WARNINGS 1
//三角形
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);
    //判断是否构成三角形，不是则按梯形算面积
    if (A + B > C && A - B < C && B - A < C) {
        printf("Perimetro = %.1lf", A + B + C);
    }
    else {
        printf("Area = %.1lf", 0.5 * (A + B) * C);
    }
}