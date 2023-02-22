#define _CRT_SECURE_NO_WARNINGS 1
//实验
#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int total_C = 0, total_R = 0, total_F = 0;
    int mount;
    char type;
    //统计每种动物数量和动物总数
    while (N >= 1) {
        cin >> mount;
        cin >> type;
        if (type == 'R') {
            total_R += mount;
        }
        else if (type == 'C') {
            total_C += mount;
        }
        else {
            total_F += mount;
        }
        N--;
    }
    int total = total_F + total_C + total_R;
    printf("Total: %d animals\n", total);
    printf("Total coneys: %d\n", total_C);
    printf("Total rats: %d\n", total_R);
    printf("Total frogs: %d\n", total_F);
    printf("Percentage of coneys: %.2lf %\n", (double)total_C / total * 100);
    printf("Percentage of rats: %.2lf %\n", (double)total_R / total * 100);
    printf("Percentage of frogs: %.2lf %\n", (double)total_F / total * 100);

}