#include<stdio.h>
// Print 1 To N
void number(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    number(x+1,n);
    return;
}
int main(){
int n;
printf("enter n:");
scanf("%d",&n);
number(1,n);
return 0;
}
