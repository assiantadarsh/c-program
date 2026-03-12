#include<stdio.h>
int main(){
/*
    *
   **
  ***
 ****
*/
int n;

printf("enter number of line :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=0;j<n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        printf("*");
    }
    printf("\n");
}

return 0;
}