#define _CRT_SECURE_NO_WARNINGS 1
//ż��
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int i = 2;
    while (i <= 100) {
        //���ż��
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
}