#define _CRT_SECURE_NO_WARNINGS 1
//选择练习1
#include <iostream>

using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    //根据已知的五个条件判断
    if ((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && (A % 2 == 0)) {
        cout << "Valores aceitos";
    }
    else {
        cout << "Valores nao aceitos";
    }
}