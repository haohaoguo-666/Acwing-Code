#define _CRT_SECURE_NO_WARNINGS 1
//倒排单词
#include <iostream>
#include <string>

using namespace std;

int main() {
    string arr[100];
    int i = 0;
    //输入到字符数组
    while (cin >> arr[i]) {
        i++;
    }
    i--;
    //字符数组倒序输出
    for (; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}