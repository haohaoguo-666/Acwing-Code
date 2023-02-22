#define _CRT_SECURE_NO_WARNINGS 1
//平方矩阵III
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int row, line;
        //每个数是前一个数的2倍
        for (row = 0; row < n; row++) {
            int number = row;
            for (line = 0; line < n; line++) {
                printf("%d ", (int)pow(2, number));
                number++;
            }

            printf("\n");
        }
        if (n != 0) {
            printf("\n");
        }

    }

}
