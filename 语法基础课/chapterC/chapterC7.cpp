#define _CRT_SECURE_NO_WARNINGS 1
//�����������
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int A, N, sum;
    cin >> A;
    //����Ϊ����ֹͣ
    while (N <= 0) {
        cin >> N;
    };
    //����������
    sum = N * (A + A + N - 1) / 2;

    cout << sum;
}