#define _CRT_SECURE_NO_WARNINGS 1
//单词替换
#include <iostream>
#include <string>


using namespace std;

int main() {
    string stra, strb, strc, strd;
    getline(cin, stra);
    getline(cin, strb);
    getline(cin, strc);
    int i = 0;
    for (i = 0; i < (int)stra.size(); i++) {
        if (stra[i] != ' ') {
            strd += stra[i];

        }
        else {
            //找到要替换的单词
            if (strb == strd) {
                cout << strc << " ";
            }
            else {
                cout << strd << " ";
            }
            strd = "";
        }
        //要替换的单词是最后一个单词
        if (i == (int)stra.size() - 1) {
            if (strb == strd) {
                cout << strc;
            }
            else {
                cout << strd;
            }
        }
    }
}
