#define _CRT_SECURE_NO_WARNINGS 1
//ʱ��ת��
#include <cstdio>

using namespace std;

int main() {
    int time;
    //������ʱ��
    scanf("%d", &time);
    //��ʱ�������Ի�����Сʱ
    int hour = time / 3600;
    //��ʱ�����
    time %= 3600;
    int minute = time / 60;
    time %= 60;
    int second = time;
    printf("%d:%d:%d", hour, minute, second);
}