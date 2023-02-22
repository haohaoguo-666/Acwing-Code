#define _CRT_SECURE_NO_WARNINGS 1
//钞票和硬币
#include <cstdio>

using namespace std;

int main() {

    double money1;
    //输入总金额
    scanf("%lf", &money1);
    //总金额*100 将小数转换成整数，方便计算
    int money2 = (int)(money1 * 100);
    //将各种钞票和硬币的额度*100
    int note[] = { 10000,5000,2000,1000,500,200,100,50,25,10,5,1 };
    printf("NOTAS:\n");
    int i;
    for (i = 0; i < 12; i++) {
        if (i < 6) {
            //总金额最多可换多少该种钞票
            printf("%d nota(s) de R$ %.2lf\n", money2 / note[i], (double)note[i] / 100);
            //总金额减少
            money2 %= note[i];
        }
        if (i == 5) {
            printf("MOEDAS:\n");
        }
        if (i >= 6) {
            //总金额最多可换多少该种硬币
            printf("%d moeda(s) de R$ %.2lf\n", money2 / note[i], (double)note[i] / 100);
            //总金额减少
            money2 %= note[i];
        }
    }




}