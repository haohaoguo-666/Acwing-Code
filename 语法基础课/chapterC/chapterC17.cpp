#define _CRT_SECURE_NO_WARNINGS 1
//�������к����ĺ�
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int left;
    int right;
    while (scanf("%d %d", &left, &right) == 2) {
        if (left <= 0 || right <= 0)continue;
        if (left > right) {
            int temp = left;
            left = right;
            right = temp;
        }
        int i = left;
        int sum = 0;
        //�������
        while (i <= right) {
            cout << i << " ";
            sum += i;
            i++;
        }
        cout << "Sum=" << sum << endl;

    }


}