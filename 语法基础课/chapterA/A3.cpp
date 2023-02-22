#define _CRT_SECURE_NO_WARNINGS 1
//圆的面积
#include <cstdio>

using namespace std;

int main() {
    double R;
    //输入半径R
    scanf("%lf", &R);
    //输出圆面积
    printf("A=%.4lf", 3.14159 * R * R);

}