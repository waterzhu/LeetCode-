#include <unordered_set>
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        std::unordered_set<int> appear;
        for i:nums
        {
            auto size = appear.size();
            appear.insert(i);
            if appear.size == size
                return i;
        }
    }
};

/*
�����������������range(0,n)���ᵼ������Խ��
*/
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int tmp;
        for (int i = 0; i < nums.size();i++) {
            while (nums[i] != i) {
                if (nums[i] == nums[nums[i]])
                    return nums[i];
                tmp = nums[i];
                nums[i] = nums[tmp];
                nums[tmp] = tmp;
            }
        }
        return -1;
    }
};