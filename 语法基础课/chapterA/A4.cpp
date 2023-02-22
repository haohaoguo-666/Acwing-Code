#define _CRT_SECURE_NO_WARNINGS 1
//平均数1
#include <cstdio>

using namespace std;

int main() {
    double A, B;
    //输入A，B
    scanf("%lf %lf", &A, &B);
    //输出A+B平均值
    printf("MEDIA = %.5lf", (A * 3.5 + B * 7.5) / 11.0);
}