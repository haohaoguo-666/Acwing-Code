#define _CRT_SECURE_NO_WARNINGS 1
//把字符串转换成整数
#include <cmath>


class Solution {
public:
    int strToInt(string str) {
        if (str.size() == 0) {
            return 0;
        }
        int i = 0;
        bool ispos = true;
        for (i = 0; i < str.size(); i++) {
            if (str[i] != ' ') {
                if (str[i] == '-') {
                    ispos = false;
                    i++;
                }
                else if (str[i] == '+') {
                    i++;
                }
                break;
            }
        }
        long long sum = 0;
        for (; i < str.size(); i++) {
            if (str[i] >= '0' && str[i] <= '9') {
                sum = sum * 10 + str[i] - '0';
                if (ispos && sum >= INT_MAX) {
                    return INT_MAX;
                }
                else if (!ispos && sum - 1 >= INT_MAX) {
                    return INT_MIN;
                }
            }
            else {
                break;
            }
        }
        return ispos ? sum : -sum;


    }
};