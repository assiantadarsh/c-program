#include<stdio.h>
// print the palindrome problem
//     1
//    212
//   32123
//  4321234
// 543212345
int main(){
    int n;
   
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        for(int q =2;q<=i;q++){
                printf("%d",q);
            }
        printf("\n");
    }
  
    return 0;
}