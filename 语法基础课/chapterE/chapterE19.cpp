#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
//字符串最大跨距
//建议用双指针
using namespace std;

int main() {

    string str, stra, strb, strc;
    cin >> str;

    int i = 0;
    for (i = 0; str[i] != ','; i++) {
        stra += str[i];
    }
    i++;
    for (; str[i] != ','; i++) {
        strb += str[i];
    }
    i++;
    for (; i < str.size(); i++) {
        strc += str[i];
    }
    
    int left = stra.size(), right = 0;
    for (i = 0; i < stra.size(); i++) {
        if (stra[i] == strb[0]) {
            int j = 0;
            for (j = 0; j < strb.size() || i + j < stra.size(); j++) {
                if (strb[j] != stra[i + j]) {
                    break;
                }
            }
            if (j == strb.size()) {
                left = i + strb.size() - 1;
                break;
            }
        }
    }
    for (i = 0; i < stra.size(); i++) {
        if (stra[i] == strc[0]) {
            int j = 0;
            for (j = 0; j < strc.size() && i + j < stra.size(); j++) {
                if (strc[j] != stra[i + j]) {
                    break;
                }
            }
            if (j == strc.size()) {
                right = i;
            }
        }
    }
    if (left >= right) {
        cout << -1;
    }
    else {
        cout << right - left - 1;
    }

}