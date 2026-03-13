#include<stdio.h>
int main(){
int a,rem,rev=0;
printf("enter any number:");
scanf("%d",&a);
int temp = a;
while(a!=0)
{   rem = a%10;
    rev = rev*10 + rem;
    a= a/10;
}
printf("%d\n",rev);
if(rev == temp)
    printf("it is palindrome");
else
    printf("it is not palindromw");

return 0;
}