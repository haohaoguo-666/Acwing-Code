#define _CRT_SECURE_NO_WARNINGS 1
//��Ϣ����
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main() {
    string str;
    getline(cin, str);
    int i = 0;
    for (i = 0; i < str.size(); i++) {
        //A ����Ϊ B��B ����Ϊ C������Y ����Ϊ Z��Z ����Ϊ A
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = (str[i] - 64) % 26 + 65;
        }
        //a ����Ϊ b��b ����Ϊ c������y ����Ϊ z��z ����Ϊ a
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = (str[i] - 96) % 26 + 97;
        }
    }
    cout << str;
}