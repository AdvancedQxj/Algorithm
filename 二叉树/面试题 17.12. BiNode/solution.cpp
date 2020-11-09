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
    TreeNode* ans = new TreeNode(0), *cur = ans;

    void biNode(TreeNode* tn) {
        if(tn==NULL) return ;
        biNode(tn->left);
        tn->left = NULL;
        cur->right = tn;
        cur = cur->right;
        biNode(tn->right);
    }

    TreeNode* convertBiNode(TreeNode* root) {
        biNode(root);
        return ans->right;
    }
};