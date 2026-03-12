#include<stdio.h>
// print the problem 
// 1   5
//  2 4 
//   3  
//  2 4 
// 1   5
int main(){
    int n;
   
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(i==j || i+j == n+1){
                printf("%d",j);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
  
    return 0;
}