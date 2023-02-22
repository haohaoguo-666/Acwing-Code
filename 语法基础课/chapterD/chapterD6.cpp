#define _CRT_SECURE_NO_WARNINGS 1
//数组的左上半部分
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    char letter;
    cin >> letter;
    double sum = 0.0;
    int row, line, mount = 0;
    double arr[12][12];
    //数组的左上半部分
    for (row = 0; row < 12; row++) {
        for (line = 0; line < 12; line++) {
            cin >> arr[row][line];
            if (row <= (10 - line)) {
                sum += arr[row][line];
                mount++;
            }
        }
    }
    if (letter == 'S') {
        printf("%.1lf", sum);
    }
    else {
        printf("%.1lf", sum / mount);
    }

}