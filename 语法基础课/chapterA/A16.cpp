#define _CRT_SECURE_NO_WARNINGS 1
//���ֵ
#include <cstdio>

using namespace std;
//����m��n�нϴ�ֵ
int max(int m, int n) {
    return m > n ? m : n;
}
int main() {
    int a, b, c;
    //����a��b��c��
    scanf("%d %d %d", &a, &b, &c);
    //���a��b��c�е����ֵ
    printf("%d eh o maior", max(max(a, b), c));
}