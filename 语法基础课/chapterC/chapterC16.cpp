#define _CRT_SECURE_NO_WARNINGS 1
//��쳲����� 
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int a = 0;
    int b = 1;
    int i = 1;
    cout << a << " ";
    //���ǰN�����
    while (i <= N - 1) {
        if (N == 1) {
            break;
        }
        cout << b << " ";
        int c = a + b;
        a = b;
        b = c;
        i = i + 1;
    }
}