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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* right_ptr = head;
        ListNode* left_ptr = NULL;

        for(int i = 0; i < k-1; i++){
            temp = temp->next;
        }

        left_ptr = temp;

        while(temp->next != NULL){
            temp = temp->next;
            right_ptr = right_ptr->next;
        }

        swap(left_ptr->val,right_ptr->val);

        return head;
    }
};