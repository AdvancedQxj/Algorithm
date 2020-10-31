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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> ans;
        deque<TreeNode*> deq;
        deq.push_back(root);
        bool tag = true;
        TreeNode* tn;
        while(!deq.empty()) {
            int size = deq.size();
            vector<int> temp;
            while(size) {
                if(tag) {
                    tn = deq.front();
                    deq.pop_front();
                    if(tn->left) deq.push_back(tn->left);
                    if(tn->right) deq.push_back(tn->right);
                }else {
                    tn = deq.back();
                    deq.pop_back();
                    if(tn->right) deq.push_front(tn->right);
                    if(tn->left) deq.push_front(tn->left);
                }
                temp.push_back(tn->val);
                --size;
            }
            tag = !tag;
            ans.push_back(temp);
        }
        return ans;
    }
};