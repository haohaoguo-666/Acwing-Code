#define _CRT_SECURE_NO_WARNINGS 1
//���ʺͽ���
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    char name[4];
    double salay;
    double sale;
    //��������
    cin >> name;
    //�����н�������۶�
    scanf("%lf %lf", &salay, &sale);
    //���������
    printf("TOTAL = R$ %.2lf", salay + 0.15 * sale);


}