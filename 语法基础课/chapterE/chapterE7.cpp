#include <iostream>
#include <cstdio>
#include <string.h>
//ֻ����һ�ε��ַ�
using namespace std;

int main() {
    char str[100001];
    cin >> str;
    int i = 0;
    int arr[26] = { 0 };
    //��ĸ��Ӧ������Ԫ��
    for (i = 0; i < strlen(str); i++) {
        arr[*(str + i) - 97]++;
    }
    //�ж��Ƿ�ֻ����һ��
    for (i = 0; i < strlen(str); i++) {
        if (arr[*(str + i) - 97] == 1) {
            printf("%c", *(str + i));
            break;
        }
    }
    //û�еĻ�
    if (i == strlen(str)) {
        printf("no");
    }
}