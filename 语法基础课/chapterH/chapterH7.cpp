#define _CRT_SECURE_NO_WARNINGS 1
//和为S的两个数字 
class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        vector<int> array;
        sort(nums.begin(), nums.end());
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            if (nums[left] + nums[right] > target)
            {
                right--;

            }
            else if (nums[left] + nums[right] < target)
            {
                left++;
            }
            else
            {
                return vector<int>{nums[left], nums[right]};
            }
        }
        return vector<int>{-1, -1};
    }
};