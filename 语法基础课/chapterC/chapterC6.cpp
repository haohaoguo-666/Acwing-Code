#define _CRT_SECURE_NO_WARNINGS 1
//��������
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int input;
    while (scanf("%d", &input) != EOF) {
        int i = 1;
        //���i <= input��ֵ��ɵ�����
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