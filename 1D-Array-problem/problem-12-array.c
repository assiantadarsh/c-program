#include<stdio.h>
#include<stdbool.h>
// given array and a number x .Find out if x lies in the array or not
// If yes then print the index ?
int main(){
    int n;

    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bool flag=false; // not present 
    int x = 4;
    int idx;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            flag = true; // present
            idx = i;
            break;
        }
    }
    if(flag == false){
        printf("%d is not present in the array ",x);
    }
    else{
        printf("%d is present in the array and it's index is %d",x,idx);
    }
 
    return 0;
}