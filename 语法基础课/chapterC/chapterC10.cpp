#define _CRT_SECURE_NO_WARNINGS 1
//����
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 2;
    int first = 1;
    while (i < 10000) {
        //������г���2��N����
        if (i % N == 2) {
            if (first == 1) {
                cout << i;
                first = 2;
            }
            else {
                cout << endl << i;
            }
        }
        i++;
    }
}