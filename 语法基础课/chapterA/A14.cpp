#define _CRT_SECURE_NO_WARNINGS 1
//ƽ����2
#include <cstdio>

using namespace std;

int main() {
    double A, B, C;
    //����A��B��C
    scanf("%lf %lf %lf", &A, &B, &C);
    //���A��B��C��Ȩƽ����
    printf("MEDIA = %.1lf", (A * 2 + B * 3 + C * 5) / 10);
}