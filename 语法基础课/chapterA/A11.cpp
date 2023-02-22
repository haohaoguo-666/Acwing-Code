#define _CRT_SECURE_NO_WARNINGS 1
//简单计算
#include <iostream>
#include <cstdio>

using namespace std;

int main() {

    int number1, amount1, number2, amount2;
    double price1, price2;
    //输入两个产品数量、单价和编号
    cin >> number1 >> amount1 >> price1;
    cin >> number2 >> amount2 >> price2;
    //输出这批产品总价值
    printf("VALOR A PAGAR: R$ %.2lf", amount1 * price1 + amount2 * price2);
}