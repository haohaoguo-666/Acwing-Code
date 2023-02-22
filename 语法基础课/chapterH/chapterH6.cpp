#define _CRT_SECURE_NO_WARNINGS 1
//最小的k个数
class Solution {
public:

    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> array;
        sort(input.begin(), input.end());
        int i = 0;
        for (i = 0; i < k; i++) {
            array.push_back(input[i]);
        }
        return array;
    }
};