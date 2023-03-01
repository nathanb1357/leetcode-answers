
typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

ListNode* reverseList(ListNode* head) {
    ListNode* curr;
    ListNode* temp;
    ListNode* prev = NULL;

    if (head != NULL) {
        curr = head;
        while (curr != NULL) {
            temp = curr;
            curr = curr->next;
            temp->next = prev;
            prev = temp;
        }
        head = temp;
    }

    return head;
}