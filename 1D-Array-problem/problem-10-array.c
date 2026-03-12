#include<stdio.h>
// Rotate the given array 'a' by k steps ,Where k is non negative
// Note : k can be greater than n as well where n is the size of array 'a'
int main(){
    int n;
    
    printf("enter the value of n:");
    scanf("%d",&n);
    int k;
    printf("enter the value of k:");
    scanf("%d",&k);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(k>n){
        k= k%n;
    }

    for(int i=k;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<k;i++){
        printf("%d ",arr[i]);
    }
  
    return 0;
}