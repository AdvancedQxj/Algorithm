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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()!=0){
            vector<int> ans1;
            int q_size = q.size();
            while(q_size--){
                TreeNode* tn = q.front();
                q.pop();
                if (!tn) continue;
                ans1.emplace_back(tn->val);
                q.push(tn->left);
                q.push(tn->right);
            }
            if (ans1.size()!=0) ans.emplace_back(ans1);
        }
        return ans;
    }
};