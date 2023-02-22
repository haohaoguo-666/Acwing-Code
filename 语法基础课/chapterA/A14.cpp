#define _CRT_SECURE_NO_WARNINGS 1
//平均数2
#include <cstdio>

using namespace std;

int main() {
    double A, B, C;
    //输入A，B，C
    scanf("%lf %lf %lf", &A, &B, &C);
    //输出A，B，C加权平均数
    printf("MEDIA = %.1lf", (A * 2 + B * 3 + C * 5) / 10);
}