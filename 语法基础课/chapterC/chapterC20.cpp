#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
//ÁâÐÎ
using namespace std;

int main() {
    int N;
    cin >> N;
    int n = N / 2 + 1;
    int i = 1;
    for (i = 1; i <= n; i++) {
        int j = n - i;
        while (j--) {
            printf(" ");
        }
        j = 2 * i - 1;
        while (j--) {
            printf("*");
        }
        printf("\n");
    }
    n = N / 2;
    for (i = n; i >= 1; i--) {
        int j = 1;
        while (j <= n - i + 1) {
            printf(" ");
            j++;
        }
        j = 2 * i - 1;
        while (j--) {
            printf("*");
        }
        printf("\n");

    }

}

