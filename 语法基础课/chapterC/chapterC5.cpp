#define _CRT_SECURE_NO_WARNINGS 1
//�����������λ��
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
        //�ҳ�������Լ�����λ��
        if (input > max) {
            max = input;
            number = i;
        }
        i++;
    }
    cout << max << endl;
    cout << number << endl;
}