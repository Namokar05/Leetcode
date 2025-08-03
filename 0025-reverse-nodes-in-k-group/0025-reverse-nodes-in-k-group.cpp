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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) return head;

        ListNode* curr = head;
        for (int i = 0; i < k; i++) {
            if (curr == nullptr) return head;
            curr = curr->next;
        }

        // Reverse k nodes
        ListNode* prev = nullptr;
        curr = head;
        int count = 0;

        while (count < k) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            count++;
        }

        
        head->next = reverseKGroup(curr, k);

        return prev;
    }
};
