#define _CRT_SECURE_NO_WARNINGS 1
//���������ĺ�
#include <iostream>

using namespace std;

int main() {
    int i;
    cin >> i;
    int left;
    int right;
    while (i--) {
        cin >> left >> right;
        if (left > right) {
            int temp = left;
            left = right;
            right = temp;
        }
        //��left��right������������
        int j = left + 1;
        int sum = 0;
        while (j < right) {
            if (j % 2 == 1 || j % 2 == -1) {
                sum += j;
            }
            j++;
        }
        cout << sum << endl;
    }
}