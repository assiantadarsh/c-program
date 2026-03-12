#include<stdio.h>
// print the pattern 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
// A B C D E F G 
int main(){
int n;

printf("enter number of row :");
scanf("%d",&n);
for(int i = 1;i<=n;i++ )
   {int a = 1;
    for(int j = 1;j<=n;j++)
        {int d=a+64;
         char ch= (char)d;
         printf("%c ",ch);
         a++;
        }
    printf("\n");
   }
   
    return 0;
}