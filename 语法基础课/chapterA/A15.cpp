#define _CRT_SECURE_NO_WARNINGS 1
//工资和奖金
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    char name[4];
    double salay;
    double sale;
    //输入名字
    cin >> name;
    //输入底薪，月销售额
    scanf("%lf %lf", &salay, &sale);
    //输出月收入
    printf("TOTAL = R$ %.2lf", salay + 0.15 * sale);


}