#define _CRT_SECURE_NO_WARNINGS 1
//油耗
#include <cstdio>

using namespace std;

int main() {
    int length;
    double oil;
    //输入总路程、总油耗
    scanf("%d %lf", &length, &oil);
    //输出每升油耗多少公里
    printf("%.3lf km/l", length / oil);
}