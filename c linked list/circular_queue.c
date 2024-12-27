#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5 // Adjust the maximum size as needed

// Define the circular queue structure
struct CircularQueue {
    int array[MAX_SIZE];
    int front;
    int rear;
};

// Function to initialize the circular queue
void initCircularQueue(struct CircularQueue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if the circular queue is empty
int isEmpty(struct CircularQueue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if the circular queue is full
int isFull(struct CircularQueue *queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Function to add an element to the circular queue (enqueue)
void enqueue(struct CircularQueue *queue, int data) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue.\n");
        return;
    }

    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    queue->array[queue->rear] = data;
}

// Function to remove an element from the circular queue (dequeue)
int dequeue(struct CircularQueue *queue) {
    int data;
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue.\n");
        return -1; // Return a sentinel value to indicate an error
    }

    data = queue->array[queue->front];

    if (queue->front == queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }

    return data;
}

int main() {
    struct CircularQueue queue;
    initCircularQueue(&queue);

    // Enqueue some elements
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    // Dequeue and print elements
    printf("Dequeued: %d\n", dequeue(&queue));
    printf("Dequeued: %d\n", dequeue(&queue));

    // Enqueue more elements
    enqueue(&queue, 40);
    enqueue(&queue, 50);

    // Dequeue and print remaining elements
    while (!isEmpty(&queue)) {
        printf("Dequeued: %d\n", dequeue(&queue));
    }

    return 0;
}
