//https://leetcode.com/problems/add-two-numbers/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #include<stdio.h>
 #include<stdlib.h>
 #include <stdbool.h>
 struct ListNode {
     int val;
          struct ListNode *next;
  };
 typedef struct ListNode NODE;
 typedef NODE * NODEPTR ;

 NODEPTR newNode(int data) {
   NODEPTR temp = (NODEPTR)malloc(sizeof(NODE));
   temp -> val = data;
   temp -> next = NULL;
   return temp;
 }

 NODEPTR push(NODEPTR head, int data) {
   NODEPTR temp = newNode(data);
   if(head == NULL)
    return temp;
   NODEPTR curr = head;
   while(curr -> next != NULL)
    curr = curr -> next;
   curr -> next = temp;

   return head;
 }
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
  NODEPTR first = l1;
  NODEPTR second = l2;
  NODEPTR result = NULL;
  int carry = 0, sum = 0;
  while(first != NULL && second != NULL) {
    sum = first -> val + second -> val + carry;
    carry = sum/10;

    result = push(result, sum%10);

    first = first -> next;
    second = second -> next;
  }

  while(first != NULL) {
    sum = first -> val + carry;
    carry = sum/10;
    result = push(result, sum%10);
    first = first -> next;
  }

  while(second != NULL) {
    sum = second -> val + carry;
    carry = sum/10;
    result = push(result, sum%10);
    second = second -> next;
  }

  if(carry != 0)
    result = push(result, carry);

  return result;
}

void display(NODEPTR head) {
  if(head == NULL) {
    printf("List empty!\n");
    return;
  }
  NODEPTR temp = head;
  while(temp != NULL) {
    printf("%d\n", temp -> val);
    temp = temp -> next;
  }
}

int main() {
  NODEPTR head = NULL;

  head = push(head, 2);
  head = push(head, 4);
  head = push(head, 3);

  NODEPTR head1 = NULL;
  head1 = push(head1, 5);
  head1 = push(head1, 6);
  head1 = push(head1, 4);
  NODEPTR result = addTwoNumbers(head, head1);
  display(result);
  return 0;
}
