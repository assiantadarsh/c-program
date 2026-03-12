#include<stdio.h>
int main(){
/*problem-
  *  
  *
*****
  *
  * 
print the given pattern if n=5;  
*/
int n;

printf("enter any number :");
scanf("%d",&n);
if( n%2 ==0){
  printf("The star plus pattern is not possible to print");
}
else{
  for(int i =1; i<=n;i++)
{   for(int j=1;j<=n;j++)
         if(j==n/2 + 1|| i== n/2 +1)
            printf("*");
        else
            printf(" ");
    printf("\n");
}
}

return 0;
}