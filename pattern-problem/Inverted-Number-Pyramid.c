#include<stdio.h>
// print the pattern 
// 555555555
//  4444444
//   33333
//    222
//     1
int main(){
    int n;
    
    printf("enter the value of n:");
    scanf("%d",&n);
    int temp = n;
    for(int i=1;i<=temp;i++){
        for(int k=2;k<=i;k++){
            printf(" ");
        }
        for(int j=1;j<=2*n-1;j++){
            printf("%d",temp-i+1);
        }
        n--;
        printf("\n");
    }
   
    return 0;
}