#define _CRT_SECURE_NO_WARNINGS 1
//游戏时间
#include <cstdio>

using namespace std;

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    //A<B则说明是结束在在同一天
    if (A < B) {
        printf("O JOGO DUROU %d HORA(S)", B - A);
        //A>B则说明是结束在第二天
    }
    else if (A > B) {
        printf("O JOGO DUROU %d HORA(S)", 24 - A + B);
        //A=B
    }
    else {
        printf("O JOGO DUROU %d HORA(S)", 24);
    }


}