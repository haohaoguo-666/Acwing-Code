#define _CRT_SECURE_NO_WARNINGS 1
//最小公倍数
#include <iostream>

using namespace std;
int lcm(int a, int b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int i = 1;
    while (i * a % b != 0) {
        i++;
    }
    return i * a;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
}