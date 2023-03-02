#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

// SELECTION SORTS a singly linked list list given the head

struct ListNode* selectionSortList(struct ListNode* head){
    struct ListNode* curr = head;
    struct ListNode* temp;
    struct ListNode* min;
    int minVal;

    while (curr) {
        min = curr;
        temp = curr->next;
        minVal = curr->val;
        while (temp) {
            if (minVal > temp->val) {
                min = temp;
                minVal = temp->val;
            }
            temp = temp->next;
        }
        min->val = curr->val;
        curr->val = minVal;
        curr = curr->next;
    }

    return head;
}


// MERGE SORTS a singly linked list list given the head

struct ListNode* mergeSortList(struct ListNode* head) {
    if (!head || !head->next) return head;
	struct ListNode* slow = head;
	struct ListNode* fast = head->next;
	while(fast && fast->next){
		slow=slow->next;
		fast=fast->next->next;
    }
    struct ListNode* head2 = slow->next;
    slow->next = NULL;
    return merge(sortList(head), sortList(head2));
}

struct ListNode* merge(struct ListNode* left, struct ListNode* right) {
    if(!left) return right;
	if(!right) return left;
	if(left->val > right->val) {
        struct ListNode* temp = left;
        left = right;
        right = temp;
	}
    struct ListNode* dummy = left;
	struct ListNode* prev = left;
	left = left->next;
	while(left && right) {
		if (left->val > right->val) {
			prev->next = right;
			right = right->next;
		} else {
			prev->next = left;
			left = left->next;
		}
		prev = prev->next;
	}
    
    if(left) prev->next = left;
    if(right) prev->next = right;
    return dummy;
}
