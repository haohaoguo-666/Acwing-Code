#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
//字符串中最长的连续出现的字符
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
            //如果相邻字符一样，则数量加一，重置最大数量和字符
            if (str[i] == str[i + 1]) {
                number++;
                if (number > max) {
                    max = number;
                    letter = str[i];
                }
            }
            //如果相连字符不一样，数量加一，重置最大数量和字符
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