#define _CRT_SECURE_NO_WARNINGS 1
//斐波那契数列
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    while (n--) {
        int number;
        cin >> number;
        long a = 0, b = 1, c;
        //输入第number个斐波那契数
        if (number == 1 || number == 0) {
            printf("Fib(%d) = %d\n", number, number);
        }
        else {
            int i = 2;
            while (i <= number) {
                c = a + b;
                a = b;
                b = c;
                i++;
            }
            printf("Fib(%d) = %ld\n", number, b);
        }
    }
}