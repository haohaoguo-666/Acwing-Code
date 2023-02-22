#define _CRT_SECURE_NO_WARNINGS 1
//字符串移位包含问题
#include <iostream>
#include <string>

using namespace std;

int main() {
    string stra, strb;
    cin >> stra >> strb;
    //stra字符串大小更大
    if (stra.size() < strb.size()) {
        string str = "";
        str = stra;
        stra = strb;
        strb = str;
    }
    //判断是不是移位包括的子串
    int i = 0, bools = 0;
    for (i = 0; i < stra.size(); i++) {
        if (stra[i] == strb[0]) {
            int number = i;
            int j = 0;
            for (j = 0; j < strb.size(); j++) {
                if (strb[j] != stra[(number + j) % stra.size()]) {
                    break;
                }
            }
            if (j == strb.size()) {
                bools = 1;
                break;
            }
        }
    }
    if (bools) {
        printf("true");
    }
    else {
        printf("false");
    }
}