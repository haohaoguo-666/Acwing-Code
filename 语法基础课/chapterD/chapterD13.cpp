#define _CRT_SECURE_NO_WARNINGS 1
//�����е���
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin >> n;
    char letter;
    cin >> letter;
    double arr[12][12];
    int row = 0, line = 0, mount = 0;
    double sum = 0.0;
    //�����е���
    for (row = 0; row < 12; row++) {
        for (line = 0; line < 12; line++) {
            cin >> arr[row][line];
            if (line == n) {
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