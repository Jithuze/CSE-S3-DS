#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
    
};

struct Node* newNode(int data)
{
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = data;
    node -> next = NULL;
    return node;
}

int isEmpty(struct Node* top){
    return !top;
}

void push(struct Node** top,int data){
    struct Node* node = newNode(data);
    node -> next = *top;
    *top = node;
    printf("%d pushed into stack.\n",data);
}

int pop(struct Node** top){
    if (isEmpty(*top))
    {
        printf("Stack Empty\n");
        return -1;
    }
    struct Node* temp = *top;    
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

int display(struct Node* top){
    struct Node* current = top;

    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
    printf("\n");
}

int main(){
    struct Node*top = NULL;
    printf(&top);
    push(&top, 1);
    push(&top, 2);
    push(&top, 3);
    push(&top, 4);
    display(&top);
    printf("Popper Element Is : %d \n",pop(&top));
    printf("Popper Element Is : %d \n",pop(&top));
    printf("Popper Element Is : %d \n",pop(&top));
    display(&top);
    return 0;
}
