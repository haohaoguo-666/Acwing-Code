#define _CRT_SECURE_NO_WARNINGS 1
//动物
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    string arr[3];
    int i = 0;
    string ss;
    //获取三个字符传的首字符，按顺序组成新的字符串
    for (i = 0; i < 3; i++) {
        cin >> arr[i];
        ss += arr[i][0];
    }
    //根据输入的三个字符串和新的字符串判断是哪个动物
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