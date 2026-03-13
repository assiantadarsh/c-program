#include<stdio.h>
int main(){
//user give input.

int n,i,fact;
fact=1;
printf("enter thr value of n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{   fact=fact*i; 
}
printf("FACTORIAL=%d",fact);
return 0;
}









