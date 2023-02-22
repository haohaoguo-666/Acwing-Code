#define _CRT_SECURE_NO_WARNINGS 1
//¸´ÖÆÊý×é
#include <iostream>

using namespace std;

void copy(int a[], int b[], int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        b[i] = a[i];
    }
}
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[100], b[100];
    int i = 0;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < m; i++) {
        cin >> b[i];
    }
    copy(a, b, k);
    for (i = 0; i < m; i++) {
        cout << b[i] << " ";
    }

}