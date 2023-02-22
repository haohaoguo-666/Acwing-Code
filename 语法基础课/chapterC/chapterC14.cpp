#define _CRT_SECURE_NO_WARNINGS 1
//区间
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int X;
    int in = 0;
    int out = 0;
    //判断区间外数值和区间内数值
    while (N--) {
        cin >> X;
        if (X >= 10 && X <= 20) {
            in++;
        }
        else {
            out++;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out";

}