#define _CRT_SECURE_NO_WARNINGS 1
//¥Ú”°æÿ’Û
#include <iostream>

using namespace std;
void print2D(int(*a)[100], int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int row, col;
    cin >> row >> col;
    int arr[100][100];
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }
    print2D(arr, row, col);
}