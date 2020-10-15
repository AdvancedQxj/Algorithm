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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL||k==0) return head;
        ListNode* ans = new ListNode(-1);
        ans->next = head;
        ListNode* temp = ans;
        ListNode* lenLN = head;
        int len = 1;
        while(lenLN->next) {
            ++len;
            lenLN = lenLN->next;
        }
        k %= len;
        while(k>0) { 
            ListNode* end = head;
            ListNode* first = head;
            while(end->next->next!=NULL) {
                end = end->next;
            }  
            temp->next = end->next;
            end->next->next = first;
            end->next = NULL;
            head = temp->next;
            --k;
        }
        return ans->next;
    }
};