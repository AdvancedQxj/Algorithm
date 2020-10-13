class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* preHead = new ListNode(-1);
        preHead->next = head;
        ListNode* temp = preHead;
        while (temp->next != nullptr && temp->next->next != nullptr) {
            ListNode* node1 = temp->next;
            ListNode* node2 = temp->next->next;
            temp->next = node2;
            node1->next = node2->next;
            node2->next = node1;
            temp = node1;
        }
        return preHead->next;
    }
};