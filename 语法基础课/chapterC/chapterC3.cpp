#define _CRT_SECURE_NO_WARNINGS 1
//正数
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double a;
    int sum = 0;
    while (scanf("%lf", &a) != EOF) {
        //累加正数个数
        if (a > 0) {
            sum++;
        }
    }
    cout << sum << " positive numbers";
}