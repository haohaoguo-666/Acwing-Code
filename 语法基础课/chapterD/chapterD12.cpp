#define _CRT_SECURE_NO_WARNINGS 1
//��С��������λ��
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min;
    cin >> min;
    int i = 1;
    int location = 0;
    //�ҳ���С��
    while (i < n) {
        int number;
        cin >> number;
        if (number < min) {
            min = number;
            location = i;
        }

        i++;
    }
    printf("Minimum value: %d\n", min);
    printf("Position: %d", location);

}