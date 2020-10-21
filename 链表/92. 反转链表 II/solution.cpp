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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* ans = new ListNode(0);
        ans->next = head;
        ListNode* pre, * cur, * end;
        int count = 0;
        while(++count<m) ans = ans->next;
        pre = ans;
        ans = ans->next;
        end = ans;
        cur = ans->next;
        while(++count<=n) {
            ListNode* temp =cur->next;
            cur->next = ans;
            ans = cur;
            cur = temp;
        }
        end->next = cur;
        pre->next = ans;
        return m==1? ans: head;
    }
};