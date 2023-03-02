#include <stdio.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

// INSERTION SORTS a singly linked list list given the head

ListNode* insertionSortList(ListNode* head) {
    ListNode* node = (ListNode*) malloc(sizeof(ListNode));
    node->next = NULL;
    ListNode* curr = head;
    ListNode* prev = node;
    ListNode* next;
    while (curr) {
        while (prev->next && prev->next->val < curr->val) {prev = prev->next;}
        next = curr->next;
		curr->next = prev->next;
		prev->next = curr;
		curr = next;
		prev = node;
    }
    return node->next;
}