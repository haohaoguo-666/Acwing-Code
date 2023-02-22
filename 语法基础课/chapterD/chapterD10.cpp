#define _CRT_SECURE_NO_WARNINGS 1
//数组变换
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int i = 0;
    int arr[20];
    //从数组末端开始输入数据
    for (i = 0; i < 20; i++) {
        cin >> arr[19 - i];
    }
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, arr[i]);
    }
}