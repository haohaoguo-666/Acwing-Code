#define _CRT_SECURE_NO_WARNINGS 1
//����
#include <cstdio>

using namespace std;

int main() {
    double figure;
    scanf("%lf", &figure);
    //�ж����ĸ�����
    if (figure >= 0 && figure <= 25) {
        printf("Intervalo [0,25]");
    }
    else if (figure > 25 && figure <= 50) {
        printf("Intervalo (25,50]");
    }
    else if (figure > 50 && figure <= 75) {
        printf("Intervalo (50,75]");
    }
    else if (figure > 75 && figure <= 100) {
        printf("Intervalo (75,100]");
    }
    else {
        printf("Fora de intervalo");
    }
}