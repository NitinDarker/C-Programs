#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} node;

node *createNode(int data) {
    node *p = (node *)malloc(sizeof(node));
    p->left = NULL;
    p->right = NULL;
    p->data = data;
    return p;
}

void inOrder(node* root) {
    if(root != NULL) {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main() {
    node *p1 = createNode(7);
    node *p2 = createNode(1);
    node *p3 = createNode(6);
    node *p4 = createNode(4);
    node *p5 = createNode(8);

    p1->left = p2;
    p1->right = p3;
    p2->left = p4;
    p2->right = p5;

/*    7
     / \
    1   6
   / \
  4   8
*/

    inOrder(p1);
    printf("\n");
    return 0;
}