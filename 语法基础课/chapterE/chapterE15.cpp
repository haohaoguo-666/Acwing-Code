#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
//�����
using namespace std;

int main() {
    string str, stra;
    int max = 0;
    //����һ�����ʼ��ַ���
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