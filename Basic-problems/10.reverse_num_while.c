#include<stdio.h>
int main()
{
// reverse of any give number 
int num,rem,rev;
printf("enter of any number:");
scanf("%d",&num);
rev = 0;
while(num !=0)
   { rem = num%10;
    rev = rev*10 + rem;
    num = num/10;}
printf("REVERSE NUMBER = %d",rev);



return 0;
}