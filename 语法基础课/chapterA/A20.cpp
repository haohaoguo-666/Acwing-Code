#define _CRT_SECURE_NO_WARNINGS 1
//����ת��
#include <cstdio>

using namespace std;

int main() {
    int days;
    //����������
    scanf("%d", &days);
    //���������ɻ����꣬��������
    printf("%d ano(s)\n", days / 365);
    //���������٣���������
    days %= 365;
    printf("%d mes(es)\n", days / 30);
    days %= 30;
    printf("%d dia(s)\n", days / 1);

}