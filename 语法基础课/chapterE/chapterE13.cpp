#define _CRT_SECURE_NO_WARNINGS 1
//�����滻
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
            //�ҵ�Ҫ�滻�ĵ���
            if (strb == strd) {
                cout << strc << " ";
            }
            else {
                cout << strd << " ";
            }
            strd = "";
        }
        //Ҫ�滻�ĵ��������һ������
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
