#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstdio>
#include <string>
//去掉多余的空格
using namespace std;

int main() {
    string str;
    //输入字符串时遇到空格或回车就会停止
    while (cin >> str) {
        cout << str << " ";
    }
}