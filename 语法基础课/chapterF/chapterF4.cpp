#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
//������ֵ
using namespace std;

// void swap(int *p1,int *p2){
//     int swap ;
//     swap = *p1;
//     *p1 = *p2;
//     *p2 = swap;
// }
//��������
void swap(int& a, int& b) {
    int swap = a;
    a = b;
    b = swap;
}

int main() {
    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << " " << b;
}