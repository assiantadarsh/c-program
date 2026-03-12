#include<stdio.h>
// WAP to reverse an array without using extra array
void reverse(int arr[],int n){
    int i=0;
    int j=n-i-1;
    while(i<j){     // for(int i=0,j=n-i-1;i<j;i++,j--;)
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
 int n;
    
    printf("enter the value of n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter array element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
  
return 0;
}