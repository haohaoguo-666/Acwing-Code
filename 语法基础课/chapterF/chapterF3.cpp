#define _CRT_SECURE_NO_WARNINGS 1
//���Լ��
//ŷ������㷨����շת�����
#include <iostream>

using namespace std;
int gcd(int a, int b) {
    int temp;
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    int c;
    while (b % a != 0) {
        c = b % a;
        b = a;
        a = c;
    }
    return a;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}