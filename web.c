#include<stdio.h>
#define MAX 50
int page;
int web[MAX];
int top = -1;
int choice;
int flag = 0;


void add_page(){
    printf("\nEnter Page Number To Add : ");
    scanf("%d",&page);
    if(top == MAX){
        printf("Cannot Add More Pages .");
    }
    else{
        web[++top]=page;
        printf("You Are Currently On Page %d",web[top]);
    }
    return;
}

void back_button(){
    if(top==0){
        printf("No Pages To Close");
    }
    else{
        printf("\nYou Are Currently On Page %d",web[--top]);
    }
}


int main(){
    
    while(flag==0){
        printf("\n1.add page\n2.back\n3.exit\n");
        printf("enter choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                add_page();
                break;
            case 2:
                back_button();
                break;
            case 3:
                flag=1;
                break;
            default:
                printf("Enter A Valid Option ");
            }
        }
        return 0;
}