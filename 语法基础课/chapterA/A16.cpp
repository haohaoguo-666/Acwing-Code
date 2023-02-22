#define _CRT_SECURE_NO_WARNINGS 1
//最大值
#include <cstdio>

using namespace std;
//返回m，n中较大值
int max(int m, int n) {
    return m > n ? m : n;
}
int main() {
    int a, b, c;
    //输入a，b，c；
    scanf("%d %d %d", &a, &b, &c);
    //输出a，b，c中的最大值
    printf("%d eh o maior", max(max(a, b), c));
}