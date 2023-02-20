#include<stdio.h>

#define MAX 5

int q[MAX];
int head = 0;
int tail = 0;
int cnt=0;

void enqueue(int x){
    if (cnt == MAX){
        printf("Error : Queue OverFlow\n");
        return;
    }
    q[tail] = x;
    tail = tail + 1;
    cnt++;
}

int dequeue(){
    if (cnt == 0)
    {
        printf("Error : Queue UnderFlow\n");
        return -1;
    }
    int x = q[head];
    head = head + 1;
    cnt--;
    return x;
}

int is__empty(){
    if (cnt == 0)
    {
        return 1;
    }
    return 0;    
}

void display(int cnt){
    if (is__empty())
    {
        printf("Error : Queue Underflow\n");
        return;
    }
    int i = head;
    for (int j = 0; j < cnt; j++)
    {
        printf("%d ",q[i]);
        i = (i+1)%MAX;
    }
    printf("\n");
}

int main(){
    enqueue(2);
    enqueue(5);
    enqueue(9);
    display(cnt);
    dequeue();
    dequeue();
    display(cnt);
    enqueue(55);
    enqueue(34);
    enqueue(21);
    enqueue(51);
    display(cnt);
}