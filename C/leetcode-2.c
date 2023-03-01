#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* head = (ListNode*) malloc(sizeof(ListNode));
    ListNode* curr = head;
    int carry = 0;
    int sum;

    while (l1 != NULL || l2 != NULL || carry) {
        sum = 0;

        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum / 10;

        ListNode* new = (ListNode*) malloc(sizeof(ListNode));
        new->val = (sum % 10);
        new->next = NULL;
        curr->next = new;
        curr = curr->next;
    }
    return head->next;
}