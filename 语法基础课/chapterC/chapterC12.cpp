#define _CRT_SECURE_NO_WARNINGS 1
//乘法表
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 1;
    //输出1~10依次乘以N的乘法表
    while (i <= 10) {
        if (i != 10) {
            cout << i << " x " << N << " = " << i * N << endl;
        }
        else {
            cout << i << " x " << N << " = " << i * N;
        }
        i++;
    }
}