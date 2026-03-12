#include<stdio.h>
// print pattern 
// 1111
// 1222
// 1233
// 1234
int main(){

    int n,min;
   
    printf("enter number of lines:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i<j) min = i;
            else min = j;
            printf("%d",min);
        }
        printf("\n");
    }
   
}