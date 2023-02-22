#define _CRT_SECURE_NO_WARNINGS 1
//燃料消耗
#include <cstdio>

using namespace std;

int main() {
    double hour, velocity;
    //输入行驶时间和速度
    scanf("%lf %lf", &hour, &velocity);
    //输出总油耗
    printf("%.3lf", hour * velocity / 12);
}