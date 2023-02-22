#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//奇数
using namespace std;

int main() {
    int upper_limit;
    cin >> upper_limit;
    int i = 1;
    //输出小于upper_limit的奇数
    while (i <= upper_limit) {
        cout << i << endl;
        i += 2;
    }
}