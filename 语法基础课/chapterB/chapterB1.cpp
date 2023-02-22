#define _CRT_SECURE_NO_WARNINGS 1
//倍数
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    //判断一个数是不是另一个数的整数倍
    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos");
    }
    else {
        printf("Nao sao Multiplos");
    }
}