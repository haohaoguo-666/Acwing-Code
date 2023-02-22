#define _CRT_SECURE_NO_WARNINGS 1
//连续整数相加
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int A, N, sum;
    cin >> A;
    //读入为正数停止
    while (N <= 0) {
        cin >> N;
    };
    //计算整数和
    sum = N * (A + A + N - 1) / 2;

    cout << sum;
}