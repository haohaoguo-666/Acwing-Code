#define _CRT_SECURE_NO_WARNINGS 1
//����
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string arr[3];
    int i = 0;
    string ss;
    //��ȡ�����ַ��������ַ�����˳������µ��ַ���
    for (i = 0; i < 3; i++) {
        cin >> arr[i];
        ss += arr[i][0];
    }
    //��������������ַ������µ��ַ����ж����ĸ�����
    if (ss == "vac")printf("aguia");
    if (ss == "vao")printf("pomba");
    if (ss == "vmo")printf("homem");
    if (ss == "vmh")printf("vaca");
    if (ss == "iih") {
        if (arr[2] == "hematofago") {
            printf("pulga");
        }
        else {
            printf("lagarta");
        }
    }
    if (ss == "iah")printf("sanguessuga");
    if (ss == "iao")printf("minhoca");


}