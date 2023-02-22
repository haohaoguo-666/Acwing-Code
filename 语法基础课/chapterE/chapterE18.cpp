#define _CRT_SECURE_NO_WARNINGS 1
//字符串乘方
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int number = 0;
    while (cin >> str) {
        if (str == ".") {
            break;
        }
        int i = 1;
        while (i <= str.size()) {
            string stra = "";
            int j = 0;
            //取str的部分
            for (j = 0; j < i; j++) {
                stra += str[j];
            }
            int k = str.size() / i;
            //判断是否是最小组成部分
            for (j = 0; j < str.size(); j++) {
                if (stra[j % i] != str[j]) {
                    i++;
                    break;
                }
            }
            if (j == str.size()) {
                cout << k << endl;
                break;
            }

        }

    }
}