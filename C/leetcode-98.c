#include <stdlib.h>

#define MAX 2147483648
#define MIN -2147483649


struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int sort(struct TreeNode* root, long int max, long int min) {
    if (!root) return 1;
    return (root->val < max && root->val > min)  && sort(root->left, root->val, min) && sort(root->right, max, root->val);
}

int isValidBST(struct TreeNode* root){
    return sort(root, MAX, MIN);
}