#define _CRT_SECURE_NO_WARNINGS 1
//�˷���
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 1;
    //���1~10���γ���N�ĳ˷���
    while (i <= 10) {
        if (i != 10) {
            cout << i << " x " << N << " = " << i * N << endl;
        }
        else {
            cout << i << " x " << N << " = " << i * N;
        }
        i++;
    }
}