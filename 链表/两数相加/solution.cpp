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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1 = 1;
        int len2 = 1;
        ListNode* q = l1;
        ListNode* p = l2;
        while(q->next!=NULL){
            ++len1;
            q = q->next;
        }
        while(p->next!=NULL){
            ++len2;
            p = p->next;
        }
        if(len1>len2){
            for(int i=1; i<=len1-len2; ++i){
                p->next = new ListNode(0);
                p = p->next;
            }
        }
        else{
            for(int i=1; i<=len2-len1; ++i)
            {
                q->next = new ListNode(0);
                q = q->next;
            }
        }
        q = l1;
        p = l2;
        ListNode* l3 = new ListNode;
        ListNode* l = l3;
        int i = 0;
        int j = 0;
        while(q!=NULL && p!=NULL){
            i = j + q->val + p->val;
            l->next = new ListNode(i%10);
            l = l->next;
            p = p->next;
            q = q->next;
            j = i>=10? 1: 0;
        }
        if (j){
            l->next = new ListNode(j);
            l = l->next;
        }
        return l3->next;
    }
};