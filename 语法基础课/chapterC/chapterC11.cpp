#define _CRT_SECURE_NO_WARNINGS 1
//��������
#include <iostream>

using namespace std;

int main() {
    int X;
    cin >> X;
    int i = 1;
    //���X�����������
    for (i = 1; i <= 6;) {
        if (X % 2 == 1) {
            cout << X;
            X += 2;
            if (i != 6) {
                cout << endl;
            }
            i++;
        }
        else {
            X += 1;
            cout << X << endl;
            X += 2;
            i++;
        }
    }
}