#define _CRT_SECURE_NO_WARNINGS 1
//����
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    //�ж�һ�����ǲ�����һ������������
    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos");
    }
    else {
        printf("Nao sao Multiplos");
    }
}