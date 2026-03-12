#include<stdio.h>
// Print pascal triangle without using function .
int main(){
int n;
printf("enter the number of n:");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    int first =1;
    for(int k=0;k<n-i;k++){
        printf("  ");}
    for(int j=0;j<=i;j++){
        printf("%4d",first);
        first = first * (i-j)/(j+1);
    }
    printf("\n");
}
return 0;
}