/*
 *
 * 94. 二叉树的中序遍历

给定一个二叉树，返回它的中序 遍历。

示例:

输入: [1,null,2,3]
   1
    \
     2
    /
   3

输出: [1,3,2]

进阶: 递归算法很简单，你可以通过迭代算法完成吗？

 */

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
    vector<int> inorderTraversal(TreeNode* root) {

        std::stack<TreeNode*> stack;
        vector<int> vec;
        TreeNode* cur = root;
        while(cur != NULL || !stack.empty()) {
            while(cur != NULL) {
                stack.push(cur);
                vec.push_back(cur->val);
                cur = cur->left;
            }
            cur = stack.top();
            stack.pop();
            cur = cur->right;
        }
        return vec;
    }
};
