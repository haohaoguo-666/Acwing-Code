#define _CRT_SECURE_NO_WARNINGS 1
//������
#include <cstdio>

using namespace std;

int main() {
    int R;
    double pai = 3.14159;
    //������İ뾶
    scanf("%d", &R);
    //���������
    printf("VOLUME = %.3lf", (4 / 3.0) * pai * R * R * R);
}