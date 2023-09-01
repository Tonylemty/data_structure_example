# include <stdio.h>
# include <stlib.h>
# include <stdbool.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
}

bool IsSubtreeLesser(struct Node* root, int value) {
    if (root == NULL) {
        return true;
    }
    if (root->data <= value
        && IsSubtreeLesser(root->left, value)
        && IsSubtreeLesser(root->right, value)) {

        return true;
    }
    else {
        return false;
    }
}

bool IsSubtreeGreater(struct Node* root, int value) {
    if (root == NULL) {
        return true;
    }
    if (root->data > value
        && IsSubtreeGreater(root->left, value)
        && IsSubtreeGreater(root->right, value)) {

        return true;
    }
    else {
        return false;
    } 
}

bool IsBstUtil(struct Node* root, int minValue, int maxValue) {

    if (root == NULL) {
        return true;
    }
    if (root->data > minValue
        && IsBinarySearch(root->left, minValue, root->data)
        && IsBinarySearch(root->right, root->data, maxValue)) {

        return true;
    }
    else {
        return false;
    }

}

bool IsBinarySearch(struct Node* root, int minValue, int maxValue) {
    
    return IsBstUtil(root, INT_MAX, INT_MIN);
}


int main() {




    return 0;
}