#include<stdio.h>
int main(){
/*
1
0 1
1 0 1
0 1 0 1
print the problem
*/
int n;

printf("enter number of rows :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
    {for(int j=1;j<=i;j++)
        {if((i+j)%2==0)
            printf(" 1 ");
         else
             printf(" 0 ");
        }
    printf("\n");
   
return 0;
}