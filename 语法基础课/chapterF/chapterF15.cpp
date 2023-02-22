#define _CRT_SECURE_NO_WARNINGS 1
//数组反转
#include <iostream>

using namespace std;

void reverse(int a[], int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        int temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int length, size;
    cin >> length >> size;
    int a[1000];
    int i = 0;
    for (i = 0; i < length; i++) {
        cin >> a[i];
    }
    reverse(a, size);
    for (i = 0; i < length; i++) {
        cout << a[i] << " ";
    }
}