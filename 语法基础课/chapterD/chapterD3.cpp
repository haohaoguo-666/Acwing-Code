#define _CRT_SECURE_NO_WARNINGS 1
//数组选择
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    double arr[100];
    int i = 0;
    for (i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] <= 10) {
            //输出不大于10的元素
            printf("A[%d] = %.1lf\n", i, arr[i]);
        }

    }
}