#define _CRT_SECURE_NO_WARNINGS 1
//���
#include <cstdio>

using namespace std;

int main() {
    double A, B, C;
    //����A��B��C��
    scanf("%lf %lf %lf", &A, &B, &C);
    //�������ͼ�����
    printf("TRIANGULO: %.3lf\n", 0.5 * A * C);
    printf("CIRCULO: %.3lf\n", 3.14159 * C * C);
    printf("TRAPEZIO: %.3lf\n", (A + B) / 2 * C);
    printf("QUADRADO: %.3lf\n", B * B);
    printf("RETANGULO: %.3lf\n", A * B);

}