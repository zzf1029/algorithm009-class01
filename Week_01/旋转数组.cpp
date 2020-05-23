/***********************************************
 *
 *
 给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
 https://leetcode-cn.com/problems/rotate-array/
 *
 *
 **********************************************
 */


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> tmp(n);
        k %= n;
        int j = 0;
        for(int i = n - k; i < n; i++)
        {
            tmp[j++] = nums[i];
        }

        for(int i = 0; i <= k; i++)
        {
            tmp[j++] = nums[i];
        }

        for(int i = 0; i < n;i++)
        {
            nums[i] = tmp[i];
        }
    }
};
