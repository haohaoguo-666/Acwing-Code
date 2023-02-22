#define _CRT_SECURE_NO_WARNINGS 1
//×ß·½¸ñ
#include <iostream>

using namespace std;

int pane(int n, int m) {
    if (n == 0) {
        return 1;
    }
    else if (m == 0) {
        return 1;
    }
    else {
        return pane(n, m - 1) + pane(n - 1, m);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << pane(n, m);
}