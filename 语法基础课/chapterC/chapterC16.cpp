#define _CRT_SECURE_NO_WARNINGS 1
//简单斐波那契 
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int a = 0;
    int b = 1;
    int i = 1;
    cout << a << " ";
    //输出前N个项和
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