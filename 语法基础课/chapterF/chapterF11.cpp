#define _CRT_SECURE_NO_WARNINGS 1
//�������
#include <iostream>

using namespace std;

void sum(int l, int r) {
    int i = l, sum = 0;
    for (; i <= r; i++) {
        sum += i;
    }
    cout << sum;
}
int main() {
    int l, r;
    cin >> l >> r;
    sum(l, r);

}