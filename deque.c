#include <stdio.h>
#define MAX 10

int d[MAX];
int head = 0;
int tail = 0;
int cnt = 0;
int ch;
int x;

void insert_front(int x) {
    if (cnt == MAX) {
        printf("OverFLow");
        return;
    }
    head = head - 1 + MAX;
    d[head] = x;
    cnt++;
}

void insert_rear(int x) {
    if (cnt == MAX) {
        printf("Oueue Overflow");
        return;
    }
    d[tail] = x;
    tail = tail + 1;
    cnt++;
}   

int delete_front() {
    if (cnt == 0) {
        printf("UnderFLow");
        return -1;
    }
    int x = d[head];
    head = head+1;
    cnt--;
    return x;   
}

int  delete_rear() {
    if (cnt == 0) {
        printf("UnderFLow");
        return -1;
    }
    int x = d[tail-1];
    tail = tail-1;
    cnt--;   
    return x;
}

int main() {
    int ch = 0;
    while (ch != 5) {
        printf("1.insert front\n2.insert rear\n3.delete front\n4.delete rear\n5.exit\n");
        printf("Enter Choice : ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            printf("\nEnter Number To Insert : ");
            scanf("%d", &x);
            insert_front(x);
            break;
        case 2:
            printf("\nEnter Number To Insert : ");
            scanf("%d", &x);
            insert_rear(x);
            break;
        case 3:
            x = delete_front();
            printf("\nDeleted Element Is %d ", x);
            break;
        case 4:
            x = delete_rear();
            printf("\nDeleted Element Is %d ", x);
            break;
        case 5:
            break;
            
        default:
            printf("Enter A Valid Option.");
            break;
        }
    }
    
}