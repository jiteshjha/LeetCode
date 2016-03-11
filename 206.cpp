// https://leetcode.com/problems/reverse-linked-list/

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
    ListNode* reverseList(ListNode* head) {
        ListNode* traverse = head;
        ListNode* prev = NULL;
        ListNode* temp;
        while(traverse != NULL) {
            temp = traverse -> next;
            traverse -> next = prev;
            prev = traverse;
            traverse = temp;
        }

        return prev;
    }
};
