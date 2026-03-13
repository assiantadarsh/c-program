#include<stdio.h>
int main(){
int n;
int a=0;

printf("enter any number:");
scanf("%d",&n);
for(int i=2;i<n;i++)
   { if(n% i ==0)
       { a = 1;
         break;}
       }
if (a==0)
    printf("the given number is prime");
else
    printf("the given number is composite");

return 0;
}