/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* rev = head;
        vector<int> vetti;
        if (head == nullptr) return nullptr;
        while(rev!=nullptr){
            vetti.push_back(rev->val);
            rev=rev->next;
        }
        reverse(vetti.begin(), vetti.end());

        rev = head;
        for(int i = 0; i < vetti.size(); i++) {
            rev->val = vetti[i];
            rev = rev->next;
        }

        return head;
    }
};