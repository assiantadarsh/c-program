#include<stdio.h>
// print the given pattern
//     1
//    2 2
//   3   3
//  4     4
// 555555555

int main(){
    int n;
  
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        int s = 2*i-1;
        if(i==n){
            for(int i=1;i<=s;i++){
                printf("%d",n);
            }
        }
        else{
            for(int j=1;j<=s;j++){
            if(j==1 || j==s){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        }
        printf("\n");
    }
 
    return 0;
}