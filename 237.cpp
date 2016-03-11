//https://leetcode.com/problems/delete-node-in-a-linked-list/

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
    void deleteNode(ListNode* node) {
        if(node == NULL)
            return;

        node -> val = node -> next -> val;
        ListNode * temp1 = node -> next;
        node -> next = node -> next -> next;
        free(temp1);
    }
};
