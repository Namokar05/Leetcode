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
    ListNode* mergetwolist(ListNode* L1, ListNode* L2) {
        ListNode* dummynode = new ListNode(-1);
        ListNode* temp = dummynode;

        while (L1 != NULL && L2 != NULL) {
            if (L1->val < L2->val) {
                temp->next = L1;
                temp = L1;
                L1 = L1->next;
            } else {
                temp->next = L2;
                temp = L2;
                L2 = L2->next;
            }
        }

        if (L1) temp->next = L1;
        else temp->next = L2;

        return dummynode->next;
    }

    ListNode* findmiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* middle = findmiddle(head);
        ListNode* right = middle->next;
        middle->next = nullptr;
        ListNode* left = head;

        left = sortList(left);
        right = sortList(right);
        return mergetwolist(left, right);
    }
};
