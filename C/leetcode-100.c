#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int isSameTree(struct TreeNode* p, struct TreeNode* q){
    while (p && q) {
        if (p->val != q->val) {
            return 0;
        }
        return isSameTree(p->left, q->left)? isSameTree(p->right, q->right): 0;
    }
    if (p || q) return 0;
    return 1;
}