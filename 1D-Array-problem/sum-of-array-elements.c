#include<stdio.h>
// sum of array element ?
int main(){
    int sum = 0;
    int arr[5] = {2,4,5,6,7};
    for(int i=0;i<5;i++){
        sum = sum +arr[i];
    }
   
    printf("the sum of array elements:%d",sum);
  
    return 0;
}