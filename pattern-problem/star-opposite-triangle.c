#include<stdio.h>
// print the pattern 
//       *
//     ***
//   *****
// *******
int main(){
int n;

printf("enter number of lines:");
scanf("%d",&n);
for(int i=1;i<=n;i++)
    if(i%2 !=0)
    {
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
}

return 0;
}