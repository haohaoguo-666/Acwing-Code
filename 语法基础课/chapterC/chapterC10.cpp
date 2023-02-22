#define _CRT_SECURE_NO_WARNINGS 1
//余数
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 2;
    int first = 1;
    while (i < 10000) {
        //输出所有除以2余N的数
        if (i % N == 2) {
            if (first == 1) {
                cout << i;
                first = 2;
            }
            else {
                cout << endl << i;
            }
        }
        i++;
    }
}