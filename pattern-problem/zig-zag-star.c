#include<stdio.h>
// print the given pattern
// *   *   *
//  * * * *
//   *   *
int main(){
    int n;
   
    printf("enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i==1 && (j+3)%4==0)||(i==2 && j%2==0)
            ||(i==3 && (j+1)%4 == 0)){
                printf("*");
            }
            else{
                printf(" ");
            }     
        }
        printf("\n");
    }

    return 0;
}