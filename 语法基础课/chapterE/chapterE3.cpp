#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <string.h>
//循环相克令
using namespace std;

int main() {
    int mount;
    cin >> mount;
    while (mount--) {
        char str1[8], str2[8];
        cin >> str1 >> str2;
        //取字符串的首字符组成新的字符串
        char str3[3] = { *(str1), *(str2), '\0' };
        if (strcmp(str3, "HG") == 0 || strcmp(str3, "BH") == 0 || strcmp(str3, "GB") == 0) {
            printf("Player1\n");
        }
        else if (strcmp(str3, "GH") == 0 || strcmp(str3, "HB") == 0 || strcmp(str3, "BG") == 0) {
            printf("Player2\n");
        }
        else {
            printf("Tie\n");
        }

    }
}