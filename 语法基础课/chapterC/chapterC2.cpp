#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//����
using namespace std;

int main() {
    int upper_limit;
    cin >> upper_limit;
    int i = 1;
    //���С��upper_limit������
    while (i <= upper_limit) {
        cout << i << endl;
        i += 2;
    }
}