#define _CRT_SECURE_NO_WARNINGS 1
//������ľ���
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2;
    //����������ĺ�������
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    //���������ľ���
    printf("%.4lf", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}