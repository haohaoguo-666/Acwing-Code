#define _CRT_SECURE_NO_WARNINGS 1
//球的体积
#include <cstdio>

using namespace std;

int main() {
    int R;
    double pai = 3.14159;
    //输入球的半径
    scanf("%d", &R);
    //输出球的体积
    printf("VOLUME = %.3lf", (4 / 3.0) * pai * R * R * R);
}