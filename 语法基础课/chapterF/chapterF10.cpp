#define _CRT_SECURE_NO_WARNINGS 1
//两个数的和
#include <iostream>
#include <cstdio>

using namespace std;

void sum(double a, double b) {
    printf("%.2lf", a + b);
}
int main() {
    double a, b;
    cin >> a >> b;
    sum(a, b);
}