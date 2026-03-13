#include<stdio.h>
// fibonacci number - 0,1,1,2,3,5,8...........
int main(){
int a=0,b=1;
int n;
printf("enter any num:");
scanf("%d",&n);
printf("%d %d ",a,b);
for(int i=0;i<=n;i++) 
{
    int c = a+b;
    a =b;
    b = c;
    printf("%d ",c);
}

return 0;
}