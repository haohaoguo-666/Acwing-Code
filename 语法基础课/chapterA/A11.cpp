#define _CRT_SECURE_NO_WARNINGS 1
//�򵥼���
#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int number1, amount1, number2, amount2;
    double price1, price2;
    //����������Ʒ���������ۺͱ��
    cin >> number1 >> amount1 >> price1;
    cin >> number2 >> amount2 >> price2;
    //���������Ʒ�ܼ�ֵ
    printf("VALOR A PAGAR: R$ %.2lf", amount1 * price1 + amount2 * price2);
}