#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
//���Դ�Сд�Ƚ��ַ�����С
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0;
    //������ĸ��Сд�Ĵ�С�Ƚ�
    for (i = 0; i <= s1.size(); i++) {
        if (s1[i] != s2[i] && s1[i] - 32 != s2[i] && s1[i] + 32 != s2[i]) {
            if (s1[i] > s2[i]) {
                printf(">");
                break;
            }
            else {
                printf("<");
                break;
            }
        }
    }
    if (i > s1.size() && s1.size() == s2.size()) {
        printf("=");
    }
}