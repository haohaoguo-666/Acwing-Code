#define _CRT_SECURE_NO_WARNINGS 1
//ƽ������II
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
                //��Խ��ߵľ���
                printf("%d ", abs(row - line) + 1);
                line++;
             }
            printf("\n");
        }
        if(n)printf("\n");
    }
}
