#define _CRT_SECURE_NO_WARNINGS 1
//��Ϸʱ��
#include <cstdio>

using namespace std;

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    //A<B��˵���ǽ�������ͬһ��
    if (A < B) {
        printf("O JOGO DUROU %d HORA(S)", B - A);
        //A>B��˵���ǽ����ڵڶ���
    }
    else if (A > B) {
        printf("O JOGO DUROU %d HORA(S)", 24 - A + B);
        //A=B
    }
    else {
        printf("O JOGO DUROU %d HORA(S)", 24);
    }


}