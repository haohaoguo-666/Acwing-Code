#define _CRT_SECURE_NO_WARNINGS 1
//nµÄ½×³Ë
#include <iostream>

using namespace std;

int fact(int n) {
    if (n == 1) 
        return 1;
 
        return fact(n - 1) * n;
    
}

int main() {
    int n;
    cin >> n;
    cout << fact(n);
}