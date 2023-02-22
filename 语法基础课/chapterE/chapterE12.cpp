#define _CRT_SECURE_NO_WARNINGS 1
//Êä³ö×Ö·û´®
#include <iostream>
#include <string>

using namespace std;

int main() {
    string stra, strb;
    getline(cin, stra);
    int i = 0;
    for (i = 0; i < (int)stra.size(); i++) {
        strb += (char)stra[i] + (char)stra[(i + 1) % stra.size()];
    }
    cout << strb;
}