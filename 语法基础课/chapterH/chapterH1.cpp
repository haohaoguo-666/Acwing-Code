#define _CRT_SECURE_NO_WARNINGS 1
//���������������г��ֵĴ���
class Solution {
public:
    int getNumberOfK(vector<int>& nums, int k) {
        int sum = 0;
        for (auto i = nums.begin(); i != nums.end(); i++) {
            if (k == *i) {
                sum++;
            }
        }
        return sum;
    }
};