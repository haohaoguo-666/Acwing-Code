#define _CRT_SECURE_NO_WARNINGS 1
//�ͺ�
#include <cstdio>

using namespace std;

int main() {
    int length;
    double oil;
    //������·�̡����ͺ�
    scanf("%d %lf", &length, &oil);
    //���ÿ���ͺĶ��ٹ���
    printf("%.3lf km/l", length / oil);
}