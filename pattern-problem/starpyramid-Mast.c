#include<stdio.h>
// print this pattern
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
int main(){
    int n;

    printf("enter the number of lines:");
    scanf("%d",&n);
    int nst=n;
    int nsp = 1;
    for(int i=1;i<=n;i++){
         for(int j=1;j<=nst;j++){       // for star print
            printf("*");
        }
        for(int k=1;k<=nsp;k++){        // for space print
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        printf("\n");
        nst--;
        nsp+=2;
    }
  
}