#define _CRT_SECURE_NO_WARNINGS 1
//����
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double a;
    int sum = 0;
    while (scanf("%lf", &a) != EOF) {
        //�ۼ���������
        if (a > 0) {
            sum++;
        }
    }
    cout << sum << " positive numbers";
}