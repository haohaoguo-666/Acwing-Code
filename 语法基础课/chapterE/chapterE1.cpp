#include <iostream>
#include <cstdio>
#include <string.h>
//字符串长度
using namespace std;

int main() {
    char str[101];
    //从stdin读入字符串
    fgets(str, 101, stdin);
    cout << strlen(str);
}