class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* first = head;
        ListNode* sec = head;

        while (first != nullptr && first->next != nullptr) {
            first = first->next->next;
            sec = sec->next;

            if (first == sec) {
                return true;
            }
        }

        return false;        
    }
};