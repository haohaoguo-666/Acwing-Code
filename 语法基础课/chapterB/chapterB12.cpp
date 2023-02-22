#define _CRT_SECURE_NO_WARNINGS 1
//游戏时间2
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int hours1, minutes1, hours2, minutes2, hours, minutes;
    //判断有几个小时
    //24小时
    cin >> hours1 >> minutes1 >> hours2 >> minutes2;
    if (hours1 == hours2) {
        hours = 24;
        //结束时间在同一天
    }
    else if (hours1 < hours2) {
        hours = hours2 - hours1;
        //结束时间不在同一天
    }
    else {
        hours = 24 - hours1 + hours2;
    }

    //判断有几分钟
    //24小时
    if (hours == 24 && minutes1 == minutes2) {
        minutes = 0;
    }
    else {
        if (minutes1 <= minutes2) {
            minutes = minutes2 - minutes1;
            //最少1分钟
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
