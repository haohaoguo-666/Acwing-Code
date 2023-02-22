#define _CRT_SECURE_NO_WARNINGS 1
//Êý×éÅÅÐò
#include <iostream>

using namespace std;

void sort(int a[], int l, int r) {
    int i;
    for (i = l; i < r; i++) {
        int j;
        for (j = l; j <= r + l - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    int i = 0;
    int arr[1000];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, l, r);
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}