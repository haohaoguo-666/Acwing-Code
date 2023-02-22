#define _CRT_SECURE_NO_WARNINGS 1
//最大数和它的位置
#include <iostream>

using namespace std;

int main() {
    int input;
    int i = 2;
    int max;
    int number = 1;
    cin >> max;
    while (i <= 100) {
        cin >> input;
        //找出最大数以及它的位置
        if (input > max) {
            max = input;
            number = i;
        }
        i++;
    }
    cout << max << endl;
    cout << number << endl;
}