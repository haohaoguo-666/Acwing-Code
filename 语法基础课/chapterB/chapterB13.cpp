#define _CRT_SECURE_NO_WARNINGS 1
//税
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    double salary, tax;
    cin >> salary;
    //不同的工资的水平不同的税
    if (salary <= 2000.00) {
        tax = 0.0;
    }
    if (salary > 2000.00 && salary <= 3000.00) {
        tax = (salary - 2000.00) * 0.08;
    }
    if (salary > 3000.00 && salary <= 4500.00) {
        tax = 1000.00 * 0.08 + (salary - 3000.00) * 0.18;
    }
    if (salary > 4500.00) {
        tax = 1000.00 * 0.08 + 1500.00 * 0.18 + (salary - 4500.00) * 0.28;
    }
    if (tax == 0.0) {
        printf("Isento");
    }
    else {
        printf("R$ %.2lf", tax);
    }

}