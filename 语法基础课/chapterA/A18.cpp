#define _CRT_SECURE_NO_WARNINGS 1
//ȼ������
#include <cstdio>

using namespace std;

int main() {
    double hour, velocity;
    //������ʻʱ����ٶ�
    scanf("%lf %lf", &hour, &velocity);
    //������ͺ�
    printf("%.3lf", hour * velocity / 12);
}