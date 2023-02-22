#define _CRT_SECURE_NO_WARNINGS 1
//Å¼Êý
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int i = 2;
    while (i <= 100) {
        //Êä³öÅ¼Êý
        if (i % 2 == 0) {
            cout << i << endl;
        }
        i++;
    }
}