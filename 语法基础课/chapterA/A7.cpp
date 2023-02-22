#define _CRT_SECURE_NO_WARNINGS 1
//两个点的距离
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    //输入两个点的横纵坐标
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    //输出两个点的距离
    printf("%.4lf", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}