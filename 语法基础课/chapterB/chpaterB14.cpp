#define _CRT_SECURE_NO_WARNINGS 1
//ºÚµ•≈≈–Ú
#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    int Max, Min, Mid;
    cin >> A >> B >> C;
    Max = (A > B ? A : B) > C ? (A > B ? A : B) : C;
    Min = (A < B ? A : B) < C ? (A < B ? A : B) : C;
    Mid = A + B + C - Max - Min;
    cout << Min << endl;
    cout << Mid << endl;
    cout << Max << endl;
    cout << endl;
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;
}