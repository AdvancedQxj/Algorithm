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
        vector<int> ans;
        stack<TreeNode*> stack;
        TreeNode* tn = root;
        while (tn || !stack.empty()){
            while (tn){
                stack.push(tn);
                tn = tn->left;
            }
            tn = stack.top();
            stack.pop();
            ans.emplace_back(tn->val);
            tn = tn->right;
        }
        return ans;
    }
};