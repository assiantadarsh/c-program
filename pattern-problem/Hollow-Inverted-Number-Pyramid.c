#include<stdio.h>
// print the pattern
// 555555555
//  4     4
//   3   3
//    2 2
//     1
int main(){
    int n;
    
    printf("enter the value of n:");
    scanf("%d",&n);
    int temp = n;
    for(int i=1;i<=n;i++){
        for(int k=2;k<=i;k++){
            printf(" ");
        }
        if(i==1){
            for(int j=1;j<=2*n-1;j++){
                printf("%d",n);
            }
        }
        else{
            for(int j=1;j<=2*temp-1;j++){
                if(j==1 || j==2*temp-1){
                    printf("%d",n-i+1);
                }
                else{
                    printf(" ");
                }
            }
        }
        
        temp--;
        printf("\n");
    }
   
    return 0;
}