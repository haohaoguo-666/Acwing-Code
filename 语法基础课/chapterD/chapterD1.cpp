#define _CRT_SECURE_NO_WARNINGS 1
//�����滻
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int arr[10];
    int i = 0;
    for (i = 0; i < 10; i++) {
        cin >> *(arr + i);
        //���������滻��1
        if (*(arr + i) <= 0) {
            *(arr + i) = 1;
        }
        printf("X[%d] = %d\n", i, *(arr + i));
    }

}