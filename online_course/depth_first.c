# include <stdlio.h>
# include <stdlib.h>

struct Node {
    char data;
    struct Node *left;
    struct Node *right;
}

void Preorder(struct Node *root) {
    
    if (root == NULL) {
        return;
    }
    printf("%c ", root->data);
    Preorder(root->left);
    Preorder(root->right);

}

void Inorder(struct Node *root) {
    if (root == NULL) {
        return;
    }
    Inorder(root->left);
    printf("%c ", root->data);
    Inorder(root->right);
}

void Postorder(struct Node *root) {
    if (root == NULL) {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    printf("%c ", root->data);
}


int main() {



    return 0;
}
