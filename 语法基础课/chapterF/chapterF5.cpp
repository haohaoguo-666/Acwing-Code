#define _CRT_SECURE_NO_WARNINGS 1
//´òÓ¡Êý×Ö
#include <iostream>

using namespace std;
void print(int a[], int size) {
    int i = 0;
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
}
int main() {
    int n, size;
    cin >> n >> size;
    int arr[1000];
    int i = 0;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    print(arr, size);


}