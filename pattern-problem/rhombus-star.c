#include<stdio.h>
int main(){
/*
   ****
  ****
 ****
**** 
print the given pattern 
*/
int n;

printf("enter number of line :");
scanf("%d",&n);
for(int i=1;i<=n;i++)
    {for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=n;k++){
        printf("*");
    }
    printf("\n");
    }
   
return 0;
}