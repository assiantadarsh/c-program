#include<stdio.h>
// print n to 0
void number(int n){
    if (n<0) return;
    printf("%d\n",n);
    number(n-1);
    return;
}
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
number(n);
return 0;
}