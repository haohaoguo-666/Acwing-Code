#define _CRT_SECURE_NO_WARNINGS 1
//ÖÊÊý
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        int number;
        cin >> number;
        int i = 2;
        int a = 1;
        while (i * i <= number) {
            if (number == 1) {
                break;
            }
            if (number % i == 0) {
                a = 0;
                break;
            }
            i++;
        }
        if (a == 1) {
            printf("%d is prime\n", number);
        }
        else {
            printf("%d is not prime\n", number);
        }
    }
}

