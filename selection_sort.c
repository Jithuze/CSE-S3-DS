#include<stdio.h>

void select_sort(int arr[],int n){
    int i,j,min_index;
    for(i=0;i<n-1;i++)
    {
        min_index = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        if(min_index!=i)
        {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;

        }
    }
    
}

int main(){
    int arr[] = {1,56,4,5,8,52,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    select_sort(arr,n);
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ,",arr[i]);
    }
    printf("\n");
    return 0;
    
}