#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
//最长单词
using namespace std;

int main() {
    string str, stra;
    int max = 0;
    //输入一个单词及字符串
    while (cin >> str) {
        int length = 0;
        if (str[str.size() - 1] != '.') {
            length = str.size();
        }
        else {
            str[str.size() - 1] = '\0';
            length = str.size() - 1;
        }
        if (length > max) {
            max = length;
            stra = str;
        }
    }
    cout << stra;
}