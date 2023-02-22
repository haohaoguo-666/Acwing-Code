#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main() {
    char str1[14];
    char str2[4];
    while (scanf("%s", str1) != EOF && scanf("%s", str2) != EOF) {
        char letter1 = *str1;
        int i = 0;
        int number = 0;
        //找到ASCII值最大的字符
        for (i = 1; i < strlen(str1); i++) {
            if (*(str1 + i) > letter1) {
                number = i;
                letter1 = *(str1 + i);
            }
        }
        i = strlen(str1) + 3;
        int j = 2;
       
        for (; i > number; i--) {
            if (i > number + 3) {
                //从后往前移动字符
                str1[i] = str1[i - 3];
            }
            else {
                //添加str2字符
                str1[i] = *(str2 + j);
                j--;
            }
        }
        printf("%s\n", str1);
    }
}