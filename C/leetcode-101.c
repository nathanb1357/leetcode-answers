#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int symmetric(struct TreeNode* left, struct TreeNode* right) {
    if (left && right) {
        if (left->val != right->val) return 0;
        return (symmetric(left->left, right->right))? symmetric(left->right, right->left): 0;
    }
    if (left || right) return 0;
    return 1;
}


int isSymmetric(struct TreeNode* root){
    return symmetric(root->left, root->right);
}