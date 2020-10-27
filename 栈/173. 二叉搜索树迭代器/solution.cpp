/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        TreeNode* temp = root;
        while(temp) {
            st.push(temp);
            temp = temp->left;
        }
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* tn = st.top();
        st.pop();
        int ans = tn->val;
        tn = tn->right;
        while(tn) {
            st.push(tn);
            tn = tn->left;
        }
        return ans;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return st.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */