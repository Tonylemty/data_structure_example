# include <stdio.h>
# include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
}

struct Node* head;

void Reverse(struct Node* p) {

    if (p->next == NULL) {
        head = p;
        return;
    }
    Reverse(p-next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

int main() {


}