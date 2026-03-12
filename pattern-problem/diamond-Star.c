#include<stdio.h>
// print the pattern
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
int main(){
    int n;
    // For upper side
  
    printf("enter number of lines:");
    scanf("%d",&n);
    int nsp = n/2;
    int nst=1;
    for(int i=1;i<=(n/2)+1;i++){
       for(int j=1;j<=nsp;j++){
        printf(" ");
       }
       for(int k=1;k<=nst;k++){
        printf("*");
       }
       printf("\n");
       nsp--;
       nst +=2;
    }
    // For Lower side
    int lnsp = 1;
    int lnst = n-2;
    for(int i=1;i<=(n/2);i++){
       for(int j=1;j<=lnsp;j++){
        printf(" ");
       }
       for(int k=1;k<=lnst;k++){
        printf("*");
       }
       printf("\n");
       lnsp++;
       lnst -=2;
    }
 
    return 0;
}