/*
 * 144. 二叉树的前序遍历

给定一个二叉树，返回它的 前序 遍历。

 示例:

输入: [1,null,2,3]
   1
    \
     2
    /
   3

输出: [1,2,3]

进阶: 递归算法很简单，你可以通过迭代算法完成吗？
 * */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> S;
        vector<int> ret;

        TreeNode* cur = root;
        while(NULL != cur || S.size()){
            while(NULL != cur){
                ret.push_back(cur->val);
                S.push(cur);
                cur = cur->left;
            }
            cur = S.top();
            S.pop();
            cur = cur->right;
        }

        return ret;
    }
};
