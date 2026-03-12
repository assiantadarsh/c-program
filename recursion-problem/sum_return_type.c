#include<stdio.h>
// Print Sum fro 1 to n (Return Type)
int sum (int n){
    if(n==1) return 1;
    return n+sum(n-1);
}
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
int r = sum(n);
printf("%d",r);
return 0;
}