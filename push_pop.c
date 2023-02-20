#include<stdio.h>
#define MAX 10
int a[MAX];
int b[MAX];
int top2=-1;
int top=-1;
int popped;
int flag=0;
int ch,element;
void pop_push(){
    popped = a[top--];
    if(top2==MAX){
        printf("Second Stack Full");
    }
    else{
        b[++top2]=popped;
        printf("popped and moved %d to new stack ",popped);
    }
}

int main(){
    printf("\n1.push to stack\n2.pop and move to new stack\n3.print new stack\n4.Exit\n");
    while (flag==0)
    {   
        
        printf("\nEnter choice : ");
        scanf("%d",&ch);
        if(ch==1){
            if(top==MAX){
            printf("Stack Full");
            }
            else{
                printf("Enter Element To Push : ");
                scanf("%d",&element);
                a[++top]=element;
            }
        }
        else if(ch==2){
            pop_push();
        }
        else if(ch==3){
            for(int i=0;i<=top2;i++){
                printf("%d ",b[i]);
            }
        }
        else if(ch==4){
            flag =1;
        }
    }
}

