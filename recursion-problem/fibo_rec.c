#include<stdio.h>
// Write a function to calculate the nth Fibonacci number using recursion.
int fibo(int a){
    if(a==1 || a==2 ) return 1;
    return fibo(a-1)+fibo(a-2);
}
int main(){
int a;
printf("enter any number:");
scanf("%d",&a);
int p = fibo(a);
printf("%d",p);
return 0;
}