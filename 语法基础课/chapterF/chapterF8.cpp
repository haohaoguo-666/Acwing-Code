#define _CRT_SECURE_NO_WARNINGS 1
//递归求斐波那契数列
#include <iostream>

using namespace std;
int Fn(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return Fn(n - 1) + Fn(n - 2);
    }
}
int main() {
    int n;
    cin >> n;
    cout << Fn(n);
}