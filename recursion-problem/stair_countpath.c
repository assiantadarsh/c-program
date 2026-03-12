#include<stdio.h>
// count ways of stair path.
// single step,double step and triple step.
int stair(int n){
    if(n==1 || n==2) return n;
    if(n==0) return 1;
    int totalways=stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;
}
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
int ways = stair(n);
printf("%d",ways);
return 0;
}