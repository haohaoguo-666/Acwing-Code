#include <iostream>
#include <cstdio>
#include <string.h>
//�ַ�������
using namespace std;

int main() {
    char str[101];
    //��stdin�����ַ���
    fgets(str, 101, stdin);
    cout << strlen(str);
}