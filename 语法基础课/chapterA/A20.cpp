#define _CRT_SECURE_NO_WARNINGS 1
//天数转换
#include <cstdio>

using namespace std;

int main() {
    int days;
    //输入总天数
    scanf("%d", &days);
    //总天数最多可换几年，依次类推
    printf("%d ano(s)\n", days / 365);
    //总天数减少，依次类推
    days %= 365;
    printf("%d mes(es)\n", days / 30);
    days %= 30;
    printf("%d dia(s)\n", days / 1);

}