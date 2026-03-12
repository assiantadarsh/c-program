#include<stdio.h>
int add(int c,int d){
    return c+d;
}
int main(){
int a,b;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
int sum= add(a,b);
printf("%d",sum);
return 0;
}