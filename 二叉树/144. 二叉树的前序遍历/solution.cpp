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
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        TreeNode* temp = root;
        stack<TreeNode*> st;
        st.push(temp);
        while(!st.empty()) {
            TreeNode* tn = st.top();
            st.pop();
            ans.push_back(tn->val);
            if(tn->right) st.push(tn->right);
            if(tn->left) st.push(tn->left);
        }
        return ans;
    }
};