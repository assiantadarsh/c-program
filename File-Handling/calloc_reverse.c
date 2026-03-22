#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    printf("Enter the number of integer:");
    scanf("%d",&n);

    int *ptr = (int*) calloc(n,sizeof(int));
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }

    ptr--;
    for(int i = 1;i<=n;i++){
        printf("%d ",*ptr);
        ptr--;
    }
}