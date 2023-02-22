#define _CRT_SECURE_NO_WARNINGS 1
//时间转换
#include <cstdio>

using namespace std;

int main() {
    int time;
    //输入总时间
    scanf("%d", &time);
    //总时间最多可以换多少小时
    int hour = time / 3600;
    //总时间减少
    time %= 3600;
    int minute = time / 60;
    time %= 60;
    int second = time;
    printf("%d:%d:%d", hour, minute, second);
}