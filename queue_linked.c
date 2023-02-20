#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Queue{
    struct Node* front;
    struct Node* rear;
};

struct Queue* create_queue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

struct Node* new_node(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

void enqueue(struct Queue* queue, int data){
    struct Node* node = new_node(data);
    if(queue->rear == NULL){
        queue->front = queue->rear = node;
        return;
    }
    queue->rear->next = node;
    queue->rear = node;
}

int dequeue(struct Queue* queue){
    if(queue->front == NULL)
    {
        printf("Queue Empty");
        exit(0);
    }
    struct Node* node = queue->front;
    queue->front = node->next;
    if (queue->front == NULL)
    {
        queue->rear = NULL;
    }
    int data = node->data;
    free(node);
    return data;
}

void display(struct Queue* queue){
    if (queue->front == NULL)
    {
        printf("Queue Empty ");
        return;
    }
    struct Node* node = queue->front;
    while (node!= NULL)
    {
        printf("%d \n",node->data);
        node = node->next;
    }
    printf("\n");
    
    
    
}

int main(){
    struct Queue* queue = create_queue();
    enqueue(queue, 10);
    enqueue(queue, 11);
    enqueue(queue, 12);
    display(queue);
    printf("%d removed\n",dequeue(queue));
    printf("%d removed\n",dequeue(queue));
    display(queue);
    return 0;
}