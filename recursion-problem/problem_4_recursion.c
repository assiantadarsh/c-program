#include<stdio.h>
// Make a function which Calculates a raised to the power b using Recursion ?
int power(int a,int b){
    if(b==0 ) return 1;
    return a*power(a,b-1);
}
int main(){
int a,b;
printf("enter base:");
scanf("%d",&a);
printf("enter power:");
scanf("%d",&b);
int p = power(a,b);
printf("%d",p);
return 0;
}