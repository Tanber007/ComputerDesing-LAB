
#include<stdio.h>
int main(){

    int arr[100], i, n;
    printf("enter the number of n \n");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(i=n-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
    }
