#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <string>
//字符串匹配
using namespace std;

int main() {
    double k = 0.0;
    cin >> k;
    string  s1, s2;
    cin >> s1 >> s2;
    int i = 0;
    double number = 0.0;
    //有几个对应位置上字符相同
    for (i = 0; i < s1.size(); i++) {
        if (s1[i] == s2[i]) {
            number++;
        }
    }
    if (k <= number / s1.size()) {
        printf("yes");
    }
    else {
        printf("no");
    }

}