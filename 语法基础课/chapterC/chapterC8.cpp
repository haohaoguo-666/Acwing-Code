#define _CRT_SECURE_NO_WARNINGS 1
//Լ��
#include <iostream>

using namespace std;

int main() {
    int figure;
    cin >> figure;
    int i = 1;
    //�������Լ��
    while (i <= figure) {
        if (figure % i == 0) {
            cout << i;
            if (i != figure) {
                cout << endl;
            }
        }
        i++;
    }
}