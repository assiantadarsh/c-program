#include<stdio.h>
int main(){

int a[5] = {3,4,5,6,4};
int b[5] = {6,7,9,6,2};
int sum[5];

printf("enter the first array element :");
for(int i=0;i<5;i++)
{
    sum[i]=a[i]+b[i];
    printf("%d ",sum[i]);
}

return 0;}
