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
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* temp = root;
        st.push(temp);
        while(!st.empty()) {
            TreeNode* tn = st.top();
            st.pop();
            ans.push_back(tn->val);
            if(tn->left) st.push(tn->left);
            if(tn->right) st.push(tn->right);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};