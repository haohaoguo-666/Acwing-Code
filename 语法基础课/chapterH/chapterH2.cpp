#define _CRT_SECURE_NO_WARNINGS 1
//0��n-1��ȱʧ������
//����һ�����ֲ���
class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        if (nums.empty()) return 0;

        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            int mid = l + r >> 1;
            if (nums[mid] != mid) r = mid;
            else l = mid + 1;
        }

        if (nums[r] == r) r++;
        return r;
    }
};

//��������ö��
class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        auto i = nums.begin();
        if (nums.size() == 0 || *i != 0) {
            return 0;
        }
        else if (nums.size() == 1) {
            return 1;
        }

        for (; i != nums.end(); i++) {
            if (*(i + 1) - *(i) != 1) {
                return *(i)+1;
            }
        }
        return 0;
    }
};

