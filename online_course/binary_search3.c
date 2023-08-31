# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

struct BstNode {

    int data;
    struct BstNode* left;
    struct BstNode* right;
};

int FindHeight(struct Node *root) {
    if (root == NULL) {
        return -1;
    }
    return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}