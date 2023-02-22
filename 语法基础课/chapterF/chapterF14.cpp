#define _CRT_SECURE_NO_WARNINGS 1
//´òÓ¡×Ö·û´®
#include <iostream>
#include <string>

using namespace std;

void print(char str[]) {
    cout << str;
}

using namespace std;

int main() {
    char str[101];
    fgets(str, 101, stdin);
    print(str);
}