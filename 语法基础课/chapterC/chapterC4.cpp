#define _CRT_SECURE_NO_WARNINGS 1
//���������ĺ�
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    int max = (X > Y ? X : Y);
    int min = (X < Y ? X : Y);
    int a = min + 1;
    int sum = 0;
    while (a < max) {
        //�ۼ�min��max�������
        if (a % 2 == 1 || a % 2 == -1) {
            sum += a;
        }
        a++;
    }
    cout << sum << endl;
}