#define _CRT_SECURE_NO_WARNINGS 1
//数组替换
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int arr[10];
    int i = 0;
    for (i = 0; i < 10; i++) {
        cin >> *(arr + i);
        //非正整数替换成1
        if (*(arr + i) <= 0) {
            *(arr + i) = 1;
        }
        printf("X[%d] = %d\n", i, *(arr + i));
    }

}