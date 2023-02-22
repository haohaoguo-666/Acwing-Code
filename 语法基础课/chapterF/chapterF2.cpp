#define _CRT_SECURE_NO_WARNINGS 1
//x和y的最大值
#include <iostream>

using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << max(a, b);
}