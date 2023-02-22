#define _CRT_SECURE_NO_WARNINGS 1
//加薪
#include <cstdio>

using namespace std;

int main() {
    double ancient_salay;
    double rate_of_rise;
    scanf("%lf", &ancient_salay);
    //根据现有工资判断涨薪幅度
    if (ancient_salay <= 400.00) {
        rate_of_rise = 0.15;
    }
    else if (ancient_salay >= 400.01 && ancient_salay <= 800.00) {
        rate_of_rise = 0.12;
    }
    else if (ancient_salay >= 800.01 && ancient_salay <= 1200.00) {
        rate_of_rise = 0.1;
    }
    else if (ancient_salay >= 1200.01 && ancient_salay <= 2000.00) {
        rate_of_rise = 0.07;
    }
    else if (ancient_salay > 2000.00) {
        rate_of_rise = 0.04;
    }
    printf("Novo salario: %.2lf\n", ancient_salay * (1 + rate_of_rise));
    printf("Reajuste ganho: %.2lf\n", ancient_salay * rate_of_rise);
    printf("Em percentual: %d %%", (int)(rate_of_rise * 100));
}


