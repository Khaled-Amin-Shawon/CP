#include <stdio.h>
#include <stdlib.h>
int size = 0;
struct node
{
    int date;
    struct node *nt;
};
// new node creat
struct node *creatnode(int n)
{
    size++;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->date = n;
    newnode->nt = NULL;
    return newnode;
}
// insert node end;
void insertnode(struct node *head, int n)
{
    struct node *newnode = creatnode(n);

    struct node *p = head;
    while (p->nt != NULL)
    {
        p = p->nt;
    }
    p->nt = newnode;
}
// delete node
void deleteNode(struct node *head)
{
    if (head == NULL || head->nt == NULL)
    {
        printf("linked list is empty \n");
        return;
    }

    struct node *cur = head;
    size--;
    while (cur->nt->nt != NULL)
    {
        cur = cur->nt;
    }
    free(cur->nt);
    cur->nt = NULL;
}
// display node
void display(struct node *head)
{
    struct node *cur = head;

    while (cur != NULL)
    {
        printf("%d ", cur->date);
        cur = cur->nt;
    }
    printf("\n");
}

int main()
{
    printf("linked list size %d \n", size);
    struct node *head = creatnode(10);
    insertnode(head, 50);
    display(head);
    insertnode(head, 20);
    display(head);
    insertnode(head, 5);
    display(head);
    insertnode(head, 550);
    display(head);
    insertnode(head, 80);
    display(head);
    insertnode(head, 560);
    display(head);
    printf("linked list size %d \n", size);
    deleteNode(head);
    display(head);
    deleteNode(head);
    display(head);
    deleteNode(head);
    display(head);
    deleteNode(head);
    display(head);
    deleteNode(head);
    display(head);
    deleteNode(head);
    display(head);
    printf("linked list size %d \n", size);
    deleteNode(head);
    display(head);
    deleteNode(head);
    display(head);
    printf("linked list size %d \n", size);
}
