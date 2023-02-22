#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <string.h>
//×Ö·û´®¼Ó¿Õ¸ñ

using namespace std;

int main() {
    char str[101];
    fgets(str, 101, stdin);
    int i = 0;
    for (i = 0; i < 100; i++) {
        if (*(str + i) != '\0') {
            printf("%c ", *(str + i));
        }
        else if (*(str + i) == '\0') {
            printf("%c", *(str + i));
        }

    }
}