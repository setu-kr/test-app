#include <stdio.h>
#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int front, rear;
} Queue;

void initialize(Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

int isEmpty(Queue *queue) {
    return queue->front == -1;
}

int isFull(Queue *queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

void enqueue(Queue *queue, int item) {
    if (!isFull(queue)) {
        if (isEmpty(queue)) {
            queue->front = 0;
        }
        queue->rear = (queue->rear + 1) % MAX_SIZE;
        queue->items[queue->rear] = item;
    }
}

int dequeue(Queue *queue) {
    if (!isEmpty(queue)) {
        int removedItem = queue->items[queue->front];
        if (queue->front == queue->rear) {
            initialize(queue);
        } else {
            queue->front = (queue->front + 1) % MAX_SIZE;
        }
        return removedItem;
    }
    return -1; // Indicates an empty queue
}

int front(Queue *queue) {
    if (!isEmpty(queue)) {
        return queue->items[queue->front];
    }
    return -1; // Indicates an empty queue
}
