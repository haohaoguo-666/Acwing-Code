#define _CRT_SECURE_NO_WARNINGS 1
//��������1�ĸ���
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