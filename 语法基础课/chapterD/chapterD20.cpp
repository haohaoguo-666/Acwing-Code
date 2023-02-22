#define _CRT_SECURE_NO_WARNINGS 1
//蛇形矩阵
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int rows, lines, row, line;
    cin >> rows >> lines;
    int arr[100][100] = { 0 };
    int i, number = 1;
    int left = 0, right = lines - 1, top = 0, botton = rows - 1;
    while (left <= right && top <= botton) {
        //上半部分
        for (i = left; i <= right; i++) {
            if (arr[top][i] == 0) {
                arr[top][i] = number;
                number++;
            }
        }
        top++;
        //右半部分
        for (i = top; i <= botton; i++) {
            if (arr[i][right] == 0) {
                arr[i][right] = number;
                number++;
            }
        }
        right--;
        //下半部分
        for (i = right; i >= left; i--) {
            if (arr[botton][i] == 0) {
                arr[botton][i] = number;
                number++;
            }
        }
        botton--;
        //左半部分
        for (i = botton; i >= top; i--) {
            if (arr[i][left] == 0) {
                arr[i][left] = number;
                number++;
            }
        }
        left++;
    }
    for (row = 0; row < rows; row++) {
        for (line = 0; line < lines; line++) {
            printf("%d ", arr[row][line]);
        }
        printf("\n");
    }
}