#define _CRT_SECURE_NO_WARNINGS 1
//信息加密
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    int i = 0;
    for (i = 0; i < str.size(); i++) {
        //A 加密为 B，B 加密为 C，…，Y 加密为 Z，Z 加密为 A
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (str[i] - 64) % 26 + 65;
        }
        //a 加密为 b，b 加密为 c，…，y 加密为 z，z 加密为 a
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 96) % 26 + 97;
        }
    }
    cout << str;
}