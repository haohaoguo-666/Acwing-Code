#define _CRT_SECURE_NO_WARNINGS 1
//��Ϸʱ��2
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int hours1, minutes1, hours2, minutes2, hours, minutes;
    //�ж��м���Сʱ
    //24Сʱ
    cin >> hours1 >> minutes1 >> hours2 >> minutes2;
    if (hours1 == hours2) {
        hours = 24;
        //����ʱ����ͬһ��
    }
    else if (hours1 < hours2) {
        hours = hours2 - hours1;
        //����ʱ�䲻��ͬһ��
    }
    else {
        hours = 24 - hours1 + hours2;
    }

    //�ж��м�����
    //24Сʱ
    if (hours == 24 && minutes1 == minutes2) {
        minutes = 0;
    }
    else {
        if (minutes1 <= minutes2) {
            minutes = minutes2 - minutes1;
            //����1����
            if (hours == 24) {
                hours = 0;
            }
        }
        else {
            hours--;
            minutes = 60 - minutes1 + minutes2;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", hours, minutes);

}
