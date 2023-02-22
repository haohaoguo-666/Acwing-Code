#define _CRT_SECURE_NO_WARNINGS 1
//¾ø¶ÔÖµ
#include <iostream>

using namespace std;

void absolute(int n) {
    if (n < 0) {
        cout << -n;
    }
    else {
        cout << n;
    }
}
int main() {
    int n;
    cin >> n;
    absolute(n);
}