#define _CRT_SECURE_NO_WARNINGS 1
//PUM
#include <iostream>

using namespace std;

int main() {
    int row, line;
    cin >> line >> row;
    int i = 0;
    //行数
    for (i = 0; i < line; i++) {
        int j = 1;
        //列数
        for (j = 1; j <= row; j++) {
            //最后一列输出PUM
            if ((row * i + j) % row == 0) {
                cout << "PUM" << endl;
            }
            else {
                cout << row * i + j << " ";
            }
        }
    }
}