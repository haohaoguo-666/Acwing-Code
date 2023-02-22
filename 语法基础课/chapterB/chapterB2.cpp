#define _CRT_SECURE_NO_WARNINGS 1
//零食
#include <cstdio>

using namespace std;

int main() {
    double arr[] = { 0.00, 4.00, 4.50, 5.00, 2.00, 1.50 };
    int number, mount;
    //输入零食编号和数量
    scanf("%d %d", &number, &mount);
    //输出总价值
    printf("Total: R$ %.2lf", arr[number] * mount);
}