// https://leetcode.com/problems/evaluate-boolean-binary-tree
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool evaluateTree(TreeNode* root) {
        if (!root) {
            return false;
        }
        
        int val = root->val;
        switch(val) {
            case 0:
                return 0;
            case 1:
                return 1;
            case 2:
                return evaluateTree(root->left) or evaluateTree(root->right);
            case 3:
                return evaluateTree(root->left) and evaluateTree(root->right);
        }
        return true;
    }
};