/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> temp;
        while(head) {
            temp.push_back(head->val);
            head = head->next;
        }
        for(int i=0, j=temp.size()-1; i<j; ++i, --j) {
            if(temp[i]!=temp[j]) return false;
        }
        return true;
    }
};