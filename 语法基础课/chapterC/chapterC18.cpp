#define _CRT_SECURE_NO_WARNINGS 1
//��ȫ��
#include <iostream>

using namespace std;

int main() {
    int mount;
    cin >> mount;
    int number;
    while (mount--) {
        cin >> number;
        int sum = 0;
        int i = 1;
        //�ж���ȫ��
        while (i <= number - 1) {
            if (number % i == 0) {
                sum += i;
            }
            i++;
        }
        if (sum == number) {
            cout << number << " is perfect" << endl;
        }
        else {
            cout << number << " is not perfect" << endl;
        }
    }
}