#define _CRT_SECURE_NO_WARNINGS 1
//数组去重
#include <iostream>

using namespace std;

int get_unique_count(int a[], int n) {
    int b[1001] = { 0 };
    int i = 0;
    int mount = 0;
    for (i = 0; i < n; i++) {
        b[a[i]]++;
    }
    for (i = 0; i < 1001; i++) {
        if (b[i] != 0) {
            mount++;
        }
    }
    return mount;
}
int main() {
    int n;
    cin >> n;
    int i = 0;
    int arr[1000];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << get_unique_count(arr, n);

}