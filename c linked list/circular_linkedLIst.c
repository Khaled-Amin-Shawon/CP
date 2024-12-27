#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the circular linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the circular linked list
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;

    // If the list is empty, make the new node point to itself
    if (*head == NULL) {
        newNode->next = newNode;
    } else {
        // Find the last node and update its 'next' to point to the new node
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    *head = newNode;
}

// Function to insert a node at the end of the circular linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;

    // If the list is empty, make the new node point to itself
    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
    } else {
        // Find the last node and update its 'next' to point to the new node
        struct Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete a node from the beginning of the circular linked list
void deleteAtBeginning(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, cannot delete.\n");
        return;
    }

    // Find the last node in the list
    struct Node* last = *head;
    while (last->next != *head) {
        last = last->next;
    }

    // Update the 'next' of the last node to skip the first node
    last->next = (*head)->next;
    
    // Update the head to the new first node
    struct Node* temp = *head;
    *head = (*head)->next;
    
    // Free the memory of the deleted node
    free(temp);
}

// Function to delete a node from the end of the circular linked list
void deleteAtEnd(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty, cannot delete.\n");
        return;
    }

    // Find the last and second last nodes in the list
    struct Node* last = *head;
    struct Node* secondLast = NULL;
    
    while (last->next != *head) {
        secondLast = last;
        last = last->next;
    }

    // If there is only one node in the list
    if (secondLast == NULL) {
        free(*head);
        *head = NULL;
    } else {
        // Update the 'next' of the second last node to skip the last node
        secondLast->next = *head;
        
        // Free the memory of the deleted node
        free(last);
    }
}

// Function to print the circular linked list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* current = head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);

    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    printf("Circular Linked List: ");
    display(head);

    deleteAtBeginning(&head);
    printf("After deleting from the beginning: ");
    display(head);

    deleteAtEnd(&head);
    printf("After deleting from the end: ");
    display(head);

    return 0;
}
