#define _CRT_SECURE_NO_WARNINGS 1
//��ʳ
#include <cstdio>

using namespace std;

int main() {
    double arr[] = { 0.00, 4.00, 4.50, 5.00, 2.00, 1.50 };
    int number, mount;
    //������ʳ��ź�����
    scanf("%d %d", &number, &mount);
    //����ܼ�ֵ
    printf("Total: R$ %.2lf", arr[number] * mount);
}