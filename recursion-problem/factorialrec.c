#include<stdio.h>
// Find factorial of given number by user using Recursion 
int factorial(int n){
    if(n==1 || n==0) return 1;
    return n*factorial(n-1);
}
int main(){
int n;
printf("enter number:");
scanf("%d",&n);
int fact = factorial(n);
printf("Factorial of (%d) : %d",n,fact);
return 0;
}