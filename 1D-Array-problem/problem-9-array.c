#include<stdio.h>
// If an array arr contains n elements ,then check if the 
// given array is palindrome or not.
int main(){
    int n;
   
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter array element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int flag = 1;
    for(int i=0;i<n/2;i++){
        if(arr[i] !=arr[n-i-1]){
            flag = 0;
            break;
        }
    }
    if(flag==1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
   
    return 0;
}