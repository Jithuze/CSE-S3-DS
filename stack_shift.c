#include<stdio.h>
#define MAX 10

int top=-1;
int top2=-1;
int top3=-1;
int b[MAX];
int element1,element2,n1,n2;
int a[MAX];
int main(){
    printf("How Many Elements You Want To Add In Stack 1 ? :");
    scanf("%d",&n1);
    int i=0;
    while (i<n1)
    {
        if(top==MAX){
            printf("Stack Full");
            }
            else{
                printf("Enter Element To Push In Stack 1 : ");
                scanf("%d",&element1);
                a[++top]=element1;
            }
            i++;
    }
    printf("How Many Elements You Want To Add In Stack 2 ? :");
    scanf("%d",&n2);
    int j=0;
    while (j<n2)
    {
        if(top2==MAX){
            printf("Stack Full");
            }
            else{
                printf("Enter Element To Push In Stack 2 : ");
                scanf("%d",&element2);
                b[++top2]=element2;
            }
            j++;
    }
    int len = (sizeof(a)/sizeof(a[0])) + (sizeof(b)/sizeof(b[0]));
    int c[len];
    printf("Stack 3 Result of Stack 1 & 2 : ");
    //adding stack A elements to stack C
    while (top!=-1)
    {
        int temp = a[top--];
        if(top==len){
            printf("Stack Full");
            }
        else{
            c[++top3]=temp;
        }
    }
    //adding Stack B elements to Stack C
    while (top2!=-1)
    {
        int temp = b[top2--];
        if(top==len){
            printf("Stack Full");
            }
        else{
            c[++top3]=temp;
        }
    }

    for(int i=0;i<=top3;i++){
                printf("%d ",c[i]);
            }


    


}