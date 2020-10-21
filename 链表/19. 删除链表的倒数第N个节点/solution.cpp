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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* l = new ListNode;
        l->next = head;
        ListNode* q = l;
        ListNode* p = l;
        for (int i=0; i<n; ++i){
            q = q->next;
        }
        while(q->next){
            q = q->next;
            p = p->next;
        }
        p->next = p->next->next;
        ListNode* ans = l->next;
        return ans;
    }
};