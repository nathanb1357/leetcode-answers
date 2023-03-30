#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* sortedArrayToBST(int *nums, int numsSize) {
    if (numsSize == 0) return NULL;
    int mid = numsSize / 2;
    struct TreeNode *node = malloc(sizeof(struct TreeNode));
    node->val = nums[mid];
    node->left = sortedArrayToBST(nums, mid);
    node->right = sortedArrayToBST(nums+mid+1, numsSize-mid-1);
    return node;
}