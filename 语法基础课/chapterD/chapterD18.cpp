#define _CRT_SECURE_NO_WARNINGS 1
//平方矩阵II
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int row, line;
        for (row = 1; row <= n; row++) {
            int line = 1;
            while (line <= n) {
                //与对角线的距离
                printf("%d ", abs(row - line) + 1);
                line++;
             }
            printf("\n");
        }
        if(n)printf("\n");
    }
}
