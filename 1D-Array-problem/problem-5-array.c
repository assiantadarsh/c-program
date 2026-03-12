#include<stdio.h>
int main(){
    // find the total number of pairs in the array whose
    // sum is equal to the given value
int arr[8] = {4,6,5,4,3,7,9,0};
int count=0,x,sum;

printf("enter any value of x :");
scanf("%d",&x);
for(int i=0;i<=7;i++){
    for(int j=i+1;j<=7;j++){
        sum = arr[i] + arr[j];
        if(sum == x){
            count = count +1;
            printf("%d %d\n",arr[i],arr[j]);
        }}}

printf("the count number is :%d",count);

return 0;}
    