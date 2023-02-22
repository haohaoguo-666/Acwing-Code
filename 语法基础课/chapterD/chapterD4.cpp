#define _CRT_SECURE_NO_WARNINGS 1
//数组中的行
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int row;
    char letter;
    double sum;
    double average;
    cin >> row >> letter;
    double arr[12][12];
    int rows, lines;
    //输入二维数组
    for (rows = 0; rows < 12; rows++) {
        for (lines = 0; lines < 12; lines++) {
            cin >> arr[rows][lines];
            if (rows == row) {
                sum += arr[rows][lines];
            }
        }
    }
    average = sum / 12;
    if (letter == 'S') {
        printf("%.1lf", sum);
    }
    else {
        printf("%.1lf", average);
    }

}