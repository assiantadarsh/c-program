#include<stdio.h>
// print the pattern 
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
int main(){
int n;

printf("enter the number of row:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j =1;j<=i;j++)
        printf("* ");
    printf("\n");
}

return 0;
}