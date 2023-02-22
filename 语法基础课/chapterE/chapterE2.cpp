#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <string.h>
//字符串中的数字个数
using namespace std;

int main() {
    char str[101];
    fgets(str, 101, stdin);
    int i = 0, sum = 0;
    for (i = 0; i < strlen(str); i++) {
        if (*(str + i) >= '0' && *(str + i) <= '9') {
            sum++;
        }
    }
    printf("%d", sum);
}