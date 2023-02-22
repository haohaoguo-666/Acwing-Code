#define _CRT_SECURE_NO_WARNINGS 1
//最大公约数
//欧几里得算法——辗转相除法
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