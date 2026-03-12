#include<stdio.h>
int main(){
    int size ;
   
    printf("enter the size of array :");
    scanf("%d",&size);
    int pd =1;
    int arr[size];
    for(int i=0;i<size;i++){
        printf("enter alement %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        pd = pd * arr[i];
    }
    printf("the product of array elements:%d",pd);
    
    return 0;}
