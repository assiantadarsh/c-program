#include<stdio.h>
// print 1 to n after recursive call
void number(int n){
    if (n<=0) return;
    number(n-1);
    printf("%d\n",n);
    return;
}
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
number(n);
return 0;
}