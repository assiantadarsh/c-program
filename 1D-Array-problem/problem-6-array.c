#include<stdio.h>
int main(){
    // find the total number of triplets in the array whose
    // sum is equal to the given value
int arr[8] = {1,2,3,4,5,6,7,8};
int count=0,x,sum;

printf("enter any value of x :");
scanf("%d",&x);
for(int i=0;i<=7;i++){
    for(int j=i+1;j<=7;j++){
        for(int k = j+1;k<=7;k++){
            sum = arr[i]+arr[j]+arr[k];
            if(sum == x){
                count++;
                printf("%d %d %d \n",arr[i],arr[j],arr[k]);
            }}}}
printf("the number of count is :%d",count);

return 0;
}