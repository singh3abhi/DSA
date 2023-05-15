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
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* curr = NULL;

        for(int i = 0; i < k; i++){
            curr = fast;
            fast = fast->next;
        }

        while(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        int temp = curr->val;
        curr->val = slow->val;
        slow->val = temp;

        fast = NULL;
        slow = NULL;
        curr = NULL;
        free(fast);
        free(slow);
        free(curr);
        return head;
    }
};