#define _CRT_SECURE_NO_WARNINGS 1
//数组填充
#include <iostream>

using namespace std;

int main() {
    int arr[10];
    int i = 0;
    for (i = 0; i < 10; i++) {
        if (i == 0) {
            cin >> arr[i];
        }
        else {
            //后一个元素为前一个元素的两倍
            arr[i] = 2 * arr[i - 1];
        }
        printf("N[%d] = %d\n", i, arr[i]);
    }
}