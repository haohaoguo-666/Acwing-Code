#define _CRT_SECURE_NO_WARNINGS 1
//����任
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int i = 0;
    int arr[20];
    //������ĩ�˿�ʼ��������
    for (i = 0; i < 20; i++) {
        cin >> arr[19 - i];
    }
    for (i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, arr[i]);
    }
}