#define _CRT_SECURE_NO_WARNINGS 1
//连续奇数的和
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;
    int max = (X > Y ? X : Y);
    int min = (X < Y ? X : Y);
    int a = min + 1;
    int sum = 0;
    while (a < max) {
        //累加min与max间的奇数
        if (a % 2 == 1 || a % 2 == -1) {
            sum += a;
        }
        a++;
    }
    cout << sum << endl;
}