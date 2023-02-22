#define _CRT_SECURE_NO_WARNINGS 1
//递增序列
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int input;
    while (scanf("%d", &input) != EOF) {
        int i = 1;
        //输出i <= input的值组成的序列
        while (i <= input) {
            if (i == 1) {
                cout << i++;
            }
            else {
                cout << " " << i++;
            }

        }
        if (input != 0) {
            cout << endl;
        }
    }
}