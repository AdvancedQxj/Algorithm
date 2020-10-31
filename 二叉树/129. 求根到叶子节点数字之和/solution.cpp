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
    int dfs(TreeNode* root, int preSum) {
        if(!root) return 0;
        int sum = preSum * 10 + root->val;
        if(!root->left && !root->right) return sum;
        else return dfs(root->left, sum) + dfs(root->right, sum);
    }

    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};