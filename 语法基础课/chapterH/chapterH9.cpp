#define _CRT_SECURE_NO_WARNINGS 1
//二进制中1的个数
class Solution {
public:
    int NumberOf1(int n) {
        int sum = 0;
        unsigned int un = n;
        while (un) {
            sum += (un & 1);
            un >>= 1;
        }
        return sum;
    }
};