class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }
        
        int index = length - n;
        if (index == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        temp = head;
        for (int i = 1; i < index; i++) {
            temp = temp->next;
        }
        
        ListNode* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
        
        return head;
    }
};