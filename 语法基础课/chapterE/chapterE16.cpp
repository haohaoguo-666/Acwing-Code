#define _CRT_SECURE_NO_WARNINGS 1
//���ŵ���
#include <iostream>
#include <string>

using namespace std;

int main() {
    string arr[100];
    int i = 0;
    //���뵽�ַ�����
    while (cin >> arr[i]) {
        i++;
    }
    i--;
    //�ַ����鵹�����
    for (; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}