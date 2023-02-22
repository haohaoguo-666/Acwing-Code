#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <string.h>
//Ìæ»»×Ö·û
using namespace std;

int main() {
    char str[31];
    fgets(str, 31, stdin);
    char letter;
    cin >> letter;
    int i = 0;
    for (i = 0; i < 31; i++) {
        if (*(str + i) == letter) {
            *(str + i) = '#';
        }
    }
    printf("%s", str);
}
