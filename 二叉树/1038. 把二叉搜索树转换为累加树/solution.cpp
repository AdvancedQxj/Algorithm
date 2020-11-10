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
    TreeNode* ans;
    int sum = 0;
    void sumTree(TreeNode* tn) {
        if(tn==nullptr) return ;
        sumTree(tn->right);
        sum += tn->val;
        tn->val = sum;
        sumTree(tn->left);
    }

    TreeNode* bstToGst(TreeNode* root) {
        ans = root;
        sumTree(ans);
        return ans;
    }
};