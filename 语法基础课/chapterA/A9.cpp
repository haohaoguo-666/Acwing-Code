#define _CRT_SECURE_NO_WARNINGS 1
//钞票
#include <cstdio>

using namespace std;

int main() {
    int math;
    //输入总金额
    scanf("%d", &math);
    printf("%d\n", math);
    //输出可以做多换几张100元钞票，依次类推
    printf("%d nota(s) de R$ 100,00\n", math / 100);
    //总金额减少，依次类推
    math = math % 100;
    printf("%d nota(s) de R$ 50,00\n", math / 50);
    math = math % 50;
    printf("%d nota(s) de R$ 20,00\n", math / 20);
    math = math % 20;
    printf("%d nota(s) de R$ 10,00\n", math / 10);
    math = math % 10;
    printf("%d nota(s) de R$ 5,00\n", math / 5);
    math = math % 5;
    printf("%d nota(s) de R$ 2,00\n", math / 2);
    math = math % 2;
    printf("%d nota(s) de R$ 1,00", math / 1);

}