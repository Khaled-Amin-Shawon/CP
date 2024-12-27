#include <stdio.h>
#include <stdlib.h>
int size=0;

struct node
{
    int data;
    struct node *left, *right;
};
struct node *creatNode(int n)
{
    size++;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = n;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node *insertnode(struct node *root, int n)
{
    if (root == NULL)
    {
        return creatNode(n);
    }
    if (root->data > n)
    {
        root->left = insertnode(root->left, n);
    }
    if (root->data < n)
    {
        root->right = insertnode(root->right, n);
    }
    return root;
}
void inorderTraversal(struct node *root)
{
    if (root == NULL)
    {
        //printf("tree is empty\n");
        return;
    }
    inorderTraversal(root->left);
    printf("%d ", root->data);
    inorderTraversal(root->right);
}
void preorderTraversal(struct node *root)
{
    if (root == NULL)
    {
        //printf("tree is empty\n");
        return;
    }
    printf("%d ", root->data);
    inorderTraversal(root->left);
    inorderTraversal(root->right);
}
void postorderTraversal(struct node *root)
{
    if (root == NULL)
    {
        //printf("tree is empty\n");
        return;
    }
    inorderTraversal(root->left);
    inorderTraversal(root->right); 
    printf("%d ", root->data);
}
void printsize(){
    printf("\nsize of the tree is %d \n", size);
}

int main()
{
    struct node *root = creatNode(25);
    printsize();
    inorderTraversal(root);
    insertnode(root, 20);
    insertnode(root, 10);
    insertnode(root, 40);
    insertnode(root, 5);
    insertnode(root, 3);
    insertnode(root, 1);
    insertnode(root, 4);
    printsize();
    preorderTraversal(root);
    insertnode(root, 7);
    insertnode(root, 8);
    insertnode(root, 6);
    insertnode(root, 15);
    insertnode(root, 12);
    insertnode(root, 18);
    insertnode(root, 30);
    insertnode(root, 50);
    printsize();
    inorderTraversal(root);
    insertnode(root, 45);
    insertnode(root, 80);
    insertnode(root, 100);
    insertnode(root, 70);
    insertnode(root, 41);
    insertnode(root, 48);
    printsize();
    postorderTraversal(root);
}