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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* ans = new ListNode(0);
        ans->next = head;
        ListNode* temp = ans;
        while(temp && temp->next) {
            ListNode* cur = temp->next;
            if(cur->next && cur->val==cur->next->val) temp->next = cur->next;
            else temp = temp->next;
        }
        return ans->next;
    }
};