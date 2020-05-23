/*
 *给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。

 

说明:

    初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
    你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-sorted-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 *
 * 
 */

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> tmp(nums1.size());
        int i = 0;
        int j = 0;
        int k = 0;
        while( (i < m) && (j < n) )
        {
            if(nums1[i] < nums2[j])
            {
                tmp[k++] = nums1[i++]; 
            }
            else if(nums1[i] > nums2[j])
            {
                tmp[k++] = nums2[j++]; 
            }
            else if(nums1[i] == nums2[j])
            {
                tmp[k++] = nums2[j++]; 
                tmp[k++] = nums1[i++]; 
            }
        }

        while(i < m)
        {
            tmp[k++] = nums1[i++]; 
        }

        while(j < n)
        {
            tmp[k++] = nums2[j++]; 
        }

        for(int l = 0; l < nums1.size();l++)
        {
            nums1[l] = tmp[l];
        }
    }
};


