#define _CRT_SECURE_NO_WARNINGS 1
//平方矩阵1
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        int row = 1, line = 1;
        for (row = 1; row <= n; row++) {
            for (line = 1; line <= n; line++) {
                //距离四条边的最小距离
                int length = row <= n - row + 1 ? row : n - row + 1;
                int wide = line <= n - line + 1 ? line : n - line + 1;
                int number = length <= wide ? length : wide;
                printf("%d ", number);
            }
            printf("\n");
        }
        if (n != 0) {
            printf("\n");
        }

    }
}


