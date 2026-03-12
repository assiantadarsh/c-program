#include<stdio.h>
int sum2(int a,int b){
    int sum = (a*b)/2;
    return sum;
}
// Given an array containing elements from 1 to 10
// except one element in this range is missing .Find the missing element.

int main(){
    int n;
  
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    int sum =0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    int x = sum2(n+1,n+2);
    int missing_val = x - sum;
    
    return 0;
}