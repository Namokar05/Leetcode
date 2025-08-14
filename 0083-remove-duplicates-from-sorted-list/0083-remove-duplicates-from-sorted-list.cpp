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
    ListNode* deleteDuplicates(ListNode* head) {
         if(head==nullptr) return head;
         ListNode *tem=head;
         ListNode *root=head;
         while(root!=nullptr){
             if(root->val!=tem->val){
                tem->next=root;
                tem=tem->next;
             }
             root=root->next;
         }
         tem->next=nullptr;
         return head;
    }
};







