#define _CRT_SECURE_NO_WARNINGS 1
//最小数和它的位置
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min;
    cin >> min;
    int i = 1;
    int location = 0;
    //找出最小数
    while (i < n) {
        int number;
        cin >> number;
        if (number < min) {
            min = number;
            location = i;
        }

        i++;
    }
    printf("Minimum value: %d\n", min);
    printf("Position: %d", location);

}