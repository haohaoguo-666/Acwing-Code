#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
//�ַ���������������ֵ��ַ�
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        int max = 0;
        int number = 0;
        char letter;
        int i = 0;
        for (i = 0; i < str.size(); i++) {
            //��������ַ�һ������������һ����������������ַ�
            if (str[i] == str[i + 1]) {
                number++;
                if (number > max) {
                    max = number;
                    letter = str[i];
                }
            }
            //��������ַ���һ����������һ����������������ַ�
            else {
                number++;
                if (number > max) {
                    max = number;
                    letter = str[i];
                }
                number = 0;
            }
        }
        cout << letter << " " << max << endl;

    }

}