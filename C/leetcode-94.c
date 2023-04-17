#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void traverse(struct TreeNode* root, int* array, int* size) {
    if (root->left) traverse(root->left, array, size);
    array[(*size)++] = root->val;
    if (root->right) traverse(root->right, array, size);
}


int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int* array = malloc(100 * sizeof(int));
    *returnSize = 0;
    if (root) traverse(root, array, returnSize);
    return array;
}