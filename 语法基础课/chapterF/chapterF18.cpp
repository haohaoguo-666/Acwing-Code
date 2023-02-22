#define _CRT_SECURE_NO_WARNINGS 1
//ÌøÌ¨½×
#include <iostream>

using namespace std;
int footstep(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n == 2) {
        return 2;
    }
    else {
        return footstep(n - 1) + footstep(n - 2);
    }
}
int main() {
    int n;
    cin >> n;
    cout << footstep(n);
}