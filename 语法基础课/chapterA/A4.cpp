#define _CRT_SECURE_NO_WARNINGS 1
//ƽ����1
#include <cstdio>

using namespace std;

int main() {
    double A, B;
    //����A��B
    scanf("%lf %lf", &A, &B);
    //���A+Bƽ��ֵ
    printf("MEDIA = %.5lf", (A * 3.5 + B * 7.5) / 11.0);
}