#include <iostream>
#include <cstdio>
#include <string.h>
//只出现一次的字符
using namespace std;

int main() {
    char str[100001];
    cin >> str;
    int i = 0;
    int arr[26] = { 0 };
    //字母对应的数组元素
    for (i = 0; i < strlen(str); i++) {
        arr[*(str + i) - 97]++;
    }
    //判断是否只出现一次
    for (i = 0; i < strlen(str); i++) {
        if (arr[*(str + i) - 97] == 1) {
            printf("%c", *(str + i));
            break;
        }
    }
    //没有的话
    if (i == strlen(str)) {
        printf("no");
    }
}